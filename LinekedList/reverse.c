#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

// Insert at beginning of linked list.

void push(struct node** head, int val) {
    struct node* newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = *head;  
    *head = newNode;        
}

// Display the list.

void display(struct node* head) {
    struct node* ptr = head;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

// Reverse Linked list

struct node* reverse(struct node *head) {
    struct node *prev = NULL;
    struct node *next = NULL;

    while(head != NULL){
        next = head->next;             // Store next node
        head->next = prev;             
        prev = head;                   // Move prev forward
        head = next;                  
    }
    return prev;
}

int main() {
    struct node* head = NULL;

    push(&head, 10);
    push(&head, 20);
    push(&head, 30);
    push(&head, 40);
    push(&head, 50);

    printf("Original list: ");
    display(head);

    head = reverse(head);

    printf("Reversed list: ");
    display(head);

    return 0;
}