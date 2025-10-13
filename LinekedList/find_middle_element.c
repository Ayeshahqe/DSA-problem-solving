#include <stdio.h>
#include <stdlib.h>                         

struct Node {
    int data;
    struct Node* next; 
};

//Insert at beginning

void push(struct Node** head, int val){     
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = val;                    
    newNode->next = *head;                  // Makes the new node's next pointer point to what the current list head points to (the old first node).
    *head = newNode;                        // Updates the head pointer to point to the newNode. This makes the new node the first item in the list.
}

// Find the middle element

void findMid(struct Node* head){
    struct Node* slow = head;
    struct Node* fast = head;

    while(fast && fast->next){              
        slow = slow->next;                  // Moves 1 step.
        fast = fast->next->next;            // Moves 2 steps.
    }
    printf("Middle Element: %d\n", slow->data);
}

int main()
{
    struct Node* head = NULL;
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);

    findMid(head);
    return 0;
}


