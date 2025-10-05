#include <stdio.h>
#define MAX 5                        

int stack[MAX], top = -1;

// Push operation

void push(int val){
    if(top == MAX-1) {               // Check overflow
        printf("Stack overflow.\n");
    }
    else {
        stack[++top] = val;          // Insert at top of stack
    }
}

// Pop operation

void pop(){
    if(top == -1){                   // Check uderflow
        printf("Stack uderflow.\n");
    }
    else {
        printf("Popped: %d\n", stack[top--]);
    }
}

// Display stack

void display(){
    if(top == -1){
        printf("Stack is empty.\n");
    }
    else {
        printf("Stack: ");
        for(int i = 0; i <= top; i++){
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}


int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    display();
    pop();
    pop();
    display();
    return 0;
}