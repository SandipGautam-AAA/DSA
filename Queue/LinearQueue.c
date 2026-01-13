#include<stdio.h>
#define MAX 10

int queue[MAX]; // creating array for to make queue

int front = -1, rear = -1;


int isFull(){
    if(rear == MAX - 1)  return 1;
    else return 0;
    
}

int isEmpty() {
    if(rear == -1) return 1;
    else return 0;
}

void enQueue(int data){
    if(isFull()) 
        printf("Queue is full.");
    else {
        if(front == -1) // if starting with front = -1
        ++front;  

        queue[++rear] = data;
    }
}

int deQueue(){
    if(isEmpty()){ 
        printf("Queue is empty.");
        return -1;
    }
    else {
        front++;
        return queue[front - 1]; 
        if(front > rear){
            rear = -1, front = -1;
        }
    }
}

void Display() {
    if(!isEmpty()){
        printf("Queue elements: ");
        for(int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    enQueue(5);
    enQueue(34);
    enQueue(10);
    Display();
    printf("DeQueue: %d \n", deQueue());
    Display();

    


}