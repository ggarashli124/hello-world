#include <stdio.h>
#include <stdlib.h>
// Linked List playground
typedef struct Node {
    int data;
    struct Node *next;
} NNode;

int main() {
    // Create 3 nodes
    NNode *head = malloc(sizeof(NNode));
    NNode *second = malloc(sizeof(NNode));
    NNode *third = malloc(sizeof(NNode));
    
    // Assign data and link them
    head->data = 10;
    head->next = second;  // Connect first to second
    
    second->data = 20;
    second->next = third;  // Connect second to third
    
    third->data = 30;
    third->next = NULL;    // End of list
    
    // Print the list
    NNode *current = head;
    while(current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    
    printf("NULL\n");
    
    // Free memory
    free(head);
    free(second);
    free(third);
    // Small change
    return 0;
}