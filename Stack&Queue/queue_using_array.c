#include <stdio.h>
#define MAX 5                        

int queue[MAX], front = -1, rear = -1;

// Enqueue operation

void enqueue(int val){
    if(rear == MAX-1){
        printf("Queue overflow.\n");
    }
    else{
        if(front == -1)  front = 0;
        queue[++rear] = val;
    } 
}

// Dequeue operation

void dequeue(){
    if(front == -1 || front > rear){
        printf("Queue underflow.\n");
    }
    else {
        printf("Dequeued: %d\n", queue[front++]);
    }
}

// Display Queue

void display(){
    if(front == -1 || front > rear){
        printf("Queue is empty.\n");
    }
    else {
        printf("Queue: ");
        for(int i = front; i <= rear; i++){
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    display();
    dequeue();
    display();
    dequeue();
    display();
    return 0;
}