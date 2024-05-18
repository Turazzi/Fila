#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "queue.h"

q_node* create_node(char *name) {
    q_node *node = (q_node*) malloc(sizeof(q_node));
    strcpy(node->name, name);
    node->next = NULL;
    node->prev = NULL;
    return node;
}

t_queue* create_queue() {
    t_queue *queue = (t_queue*) malloc(sizeof(t_queue));
    queue->head = NULL;
    queue->tail = NULL;
    queue->size = 0;
    return queue;
}

int is_empty(t_queue *queue) {
    return queue->size == 0;
}

int enqueue(t_queue *queue, char *name) {
    q_node *node = create_node(name);
    if (is_empty(queue)) {
        queue->head = node;
        queue->tail = node;
    } else {
        queue->tail->next = node;
        node->prev = queue->tail;
        queue->tail = node;
    }
    queue->size++;
    return 1;
}

int dequeue(t_queue *queue, char *name) {
    if (is_empty(queue)) {
        return 0;
    }
    q_node *node = queue->head;
    strcpy(name, node->name);
    queue->head = node->next;
    if (queue->head != NULL) {
        queue->head->prev = NULL;
    } else {
        queue->tail = NULL;
    }
    free(node);
    queue->size--;
    return 1;
}

void print_queue(t_queue *queue) {
    q_node *current = queue->head;
    while (current != NULL) {
        printf("%s\n", current->name);
        current = current->next;
    }
}

void destroy_queue(t_queue *queue) {
    q_node *current = queue->head;
    q_node *next;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }

    free(queue);
}
