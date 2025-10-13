#include <stdio.h>
#include <stdlib.h>

// Singly Linked List

struct node{
    int data;
    struct node *next;
};

void add_at_pos(struct node* head, int data, int pos){
    struct node *ptr = head;
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;

    // Traversing the list

    pos--;
    while(pos != 1){
        ptr = ptr->next;            // Point to the second node
        pos--;
    }

    newNode->next = ptr->next;
    ptr->next = newNode;
}

void add_at_end(struct node* head, int data){
    struct node *ptr , *temp;
    ptr = head;
    temp =(struct node*)malloc(sizeof(struct node));

    temp->data = data;
    temp->next = NULL;

    while(ptr->next != NULL){
        ptr = ptr->next;
    }

    ptr->next = temp;
}

int main(){
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->next = NULL;

    add_at_end(head, 50);
    add_at_end(head, 3);

    int data = 60, position = 3;

    add_at_pos(head, data, position);
    struct node *ptr = head;

    while(ptr != NULL){             // traversing whole list and printing it's elements
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }

    return 0;
}