#include <bits/stdc++.h> 
class CircularQueue{
    int *arr;
    int front;
    int rear;
    int size;
    public:
    // Initialize your data structure.
    CircularQueue(int n){
        // Write your code here.
        size=n;
        front=-1;
        rear=-1;
        arr=new int[size];
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        // Write your code here.
        //to check whete queue is full
        if((front==0 && rear==size-1) || (rear == (front-1)%(size-1))){
            return false;
        }
        //to push 1st element
        else if(front==-1){
            front=rear=0;
        }
        //to maintain cyclic nature
        else if(rear==size-1 && front != 0){
            rear=0;
        }
        else{
            rear++;
        }

        //push value in queue
        arr[rear]=value;
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        // Write your code here.
        //to check queue is empty
        if(front==-1){
            return -1;
        }

        int ans=arr[front];
        arr[front]=-1;

        //if single element is present
        if(front==rear){
            front=rear=-1;
        }

        //to maintain cyclic nature
        else if(front==size-1){
            front=0;
        }
        else{
            front++;
        }
        return ans;
    }
};