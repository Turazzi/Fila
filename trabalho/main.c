#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "queue.h"

int main() {
    char command;
    char name[50];
    t_queue *priority_queue = create_queue();
    t_queue *general_queue = create_queue();
    t_queue *served_queue = create_queue();
    int priority_count = 0;

    do {
        scanf(" %c", &command);

        switch(command) {
            case 'p':
                scanf("%s", name);
                enqueue(priority_queue, name);
                break;
            case 'g':
                scanf("%s", name);
                enqueue(general_queue, name);
                break;
            case 's':
                if (is_empty(priority_queue) && is_empty(general_queue)) {
                    break;
                }
                if (!is_empty(priority_queue) && (priority_count < 3 || is_empty(general_queue))) {
                    dequeue(priority_queue, name);
                    priority_count++;
                } 
                else if (!is_empty(general_queue)) {
                    dequeue(general_queue, name);
                    priority_count = 0;
                }
                enqueue(served_queue, name);
                break;
            case 'f':
                print_queue(served_queue);
                destroy_queue(priority_queue);
                destroy_queue(general_queue);
                destroy_queue(served_queue);
                break;
        }
    } while(command != 'f');
    return 0;
}
