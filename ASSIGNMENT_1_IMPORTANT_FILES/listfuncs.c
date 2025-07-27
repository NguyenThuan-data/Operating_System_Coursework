
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listfuncs.h"

// Adds a new process control block (PCB) into the linked list
// The list is maintained in order by process ID (pid).
int insert(struct List_item *listHead, struct List_item *insertItem) {
    struct List_item *current = listHead;

    while (current->next != NULL && current->next->pcb->processID < insertItem->pcb->processID) {
        current = current->next;
    }

    if (current->next != NULL && current->next->pcb->processID == insertItem->pcb->processID) {
        return 0; 
    }

    insertItem->next = current->next;
    current->next = insertItem;
    return 1; 
}

// Removes a PCB from the linked list using its process ID
int delete(struct List_item *listHead, int pid) {
    struct List_item *current = listHead;

    while (current->next != NULL && current->next->pcb->processID != pid) {
        current = current->next;
    }

    if (current->next == NULL) {
        return 0;
    }

        struct List_item *temp = current->next;
    current->next = temp->next;
    free(temp->pcb);
    free(temp);
    return 1; 
}

// Outputs the details of each PCB in the linked list
void printList(struct List_item *listHead) {
    struct List_item *current = listHead->next;
    while (current != NULL) {
        printf("Process ID: %d, Process Name: %s\n", current->pcb->processID, current->pcb->processName);
        current = current->next;
    }
}
