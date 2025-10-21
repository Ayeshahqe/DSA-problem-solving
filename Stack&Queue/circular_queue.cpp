#include <iostream>
using namespace std;

class CircularQueue {
    int* arr;
    int currSize, capacity;
    int f, r;

public:
    CircularQueue(int size) {
        capacity = size;
        arr = new int[capacity];
        f = 0;
        r = -1;
        currSize = 0;
    }

    void push(int data){
        if(currSize == capacity) {
            cout << "Circular queue is full.\n";
            return;
        }

        r = (r + 1) % capacity;
        arr[r] = data;
        currSize++;
    }

    void pop(){
        if(empty()) {
            cout << "Circular queue is empty\n";
            return;
        }

        f = (f + 1) %  capacity;
        currSize--;
    }

    int front(){
        if(empty()) {
            cout << "Circular queue is empty\n";
            return -1;
        }

        return arr[f];
    }

    bool empty() {
        return currSize == 0;
    }

    void printArr() {
        for(int i=0; i<capacity; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main(){
    CircularQueue cq(3);

    cq.push(1);
    cq.push(2);
    cq.push(3);
    cq.pop();
    cq.push(4);

    cq.printArr();
    while(!cq.empty()){
        cout << cq.front() << " ";
        cq.pop();
    }
    cout << endl;

    return 0;    
}