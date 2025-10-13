#include <stdio.h>
#include <stdlib.h>

// Singly Linked List

struct node{
    int data;
    struct node *next;
};

// Creating a new node

struct node* add_beg(struct node* head, int val){
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = NULL;

    newNode->next = head;
    head = newNode;
    return head;
}


int main(){
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->next = NULL;

    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = 44;
    newNode->next = NULL;

    head->next = newNode;                   // To make the first node point to the second node

    int data = 5;                           // Create a new node and insert this data

    head = add_beg(head, data);
    newNode = head;
    while(newNode != NULL){
        printf("%d ", newNode->data);
        newNode = newNode->next;
    }

    return 0;
}