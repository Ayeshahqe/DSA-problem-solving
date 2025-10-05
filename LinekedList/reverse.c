#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Insert at beginning

void push(struct Node** head, int val) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = *head;
    *head = newNode;
}

// Reverse the List

struct Node* reverse(struct Node* head) {
    struct Node *prev=NULL, *curr=head, *next=NULL;
    while(curr){
        next = curr->next;             // Store next node
        curr->next = prev;             // Reverse link
        prev = curr;                   // Move prev forward
        curr = next;                   // Move curr forward
    }
    return prev;                       // New head
}

// Print List

void printList(struct Node* head) {
    while(head) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}


int main() {
    struct Node* head=NULL;
    push(&head, 5);
    push(&head, 4);   
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);

    printf("Original List: ");
    printList(head);

    head = reverse(head);
    printf("Reversed List: ");
    printList(head);
    return 0;

}