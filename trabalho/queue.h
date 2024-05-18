#ifndef QUEUE_H
#define QUEUE_H

typedef struct _node {
    char name[50];
    struct _node *next;
    struct _node *prev;
} q_node;

typedef struct {
    q_node *head;
    q_node *tail;
    int size;
} t_queue;

q_node* create_node(char *name);
t_queue* create_queue();
int is_empty(t_queue *queue);
int enqueue(t_queue *queue, char *name);
int dequeue(t_queue *queue, char *name);
void print_queue(t_queue *queue);
void destroy_queue(t_queue *queue);

#endif
