#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listfuncs.h"

int main() {
    // Allocate memory for the head of the linked list and set it up
    struct List_item *listHead = (struct List_item *)malloc(sizeof(struct List_item));
    listHead->next = NULL;
    
    // Create the first node in the list (Process A)
    struct List_item *item1 = (struct List_item *)malloc(sizeof(struct List_item));
    item1->pcb = (PCB *)malloc(sizeof(PCB));
    item1->pcb->processID = 10;
    strcpy(item1->pcb->processName, "Process A");
    insert(listHead, item1);
    printList(listHead);

    // Create the second node in the list (Process B)
    struct List_item *item2 = (struct List_item *)malloc(sizeof(struct List_item));
    item2->pcb = (PCB *)malloc(sizeof(PCB));
    item2->pcb->processID = 20;
    strcpy(item2->pcb->processName, "Process B");
    insert(listHead, item2);
    printList(listHead);

    // Create the third node in the list (Process C)
    struct List_item *item3 = (struct List_item *)malloc(sizeof(struct List_item));
    item3->pcb = (PCB *)malloc(sizeof(PCB));
    item3->pcb->processID = 15;
    strcpy(item3->pcb->processName, "Process C");
    insert(listHead, item3);
    printList(listHead);

    // Attempt to insert a fourth node with a duplicate process ID (process D)
    struct List_item *item4 = (struct List_item *)malloc(sizeof(struct List_item));
    item4->pcb = (PCB *)malloc(sizeof(PCB));
    item4->pcb->processID = 10;
    strcpy(item4->pcb->processName, "Process D");
    if(!insert(listHead, item4)) {
        printf("Insertion failed: Duplicate process ID.\n");
        free(item4->pcb);
        free(item4);
    }
    printList(listHead);

    // Attempt to delete the node withh process ID 15 (Process C)
    if (delete(listHead, 15)) {
        printf("Deletion successful: Process ID 15 removed.\n");
    }
    else {
        printf("Deletion failed: Process ID 15 is not found.\n");
    }
    printList(listHead);

    if (!delete(listHead, 30)) {
        printf("Deletion failed: Process ID 30 is not found.\n");
    }
    printList(listHead);

    // Free all dynamically allocated memory used by the linked list
    struct List_item *current = listHead;
    struct List_item *next;

    // Traverse the list and free each node and its PCB
    while (current != NULL)
    {
        next = current->next;
        free(current->pcb);
        free(current);
        current = next;
    }
    
    return 0;
}

