#include<stdio.h>
#define MAX 5

int items[MAX];
int front = -1,  rear = -1;

int isFull() {
    if(front == (rear + 1) % MAX) return 1;
    return 0;
}

int isEmpty() {
    if(front == -1) return 1;
    return 0;
}

void enQuique(int item){
    if(isFull()) 
        printf("Queue is full.\n");
    else {
        if(front == -1) front = 0;

        rear = (rear + 1) % MAX;    // Circular increment of rear
        items[rear] = item;
        printf("Inserted -> %d\n", items[rear]);
    }
      
}

int deQueue() {
    if(isEmpty()){
        printf("Queue is empty.\n");
        return -1;
    } else {
        int item = items[front];
        if( rear == front) {
            // Queue has only one element, so we reset the queue after deleting it

            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % MAX; // Circular incriment of front
        }

        return item;
    }

}

void display() {
    int i;
    if(isEmpty())
        printf("Queue is empty.\n");
    else {
        printf("\nFront -> %d\n", front);
        printf("Items => ");
        for(i = front; i != rear; i = (i + 1) % MAX){
            printf("%d ", items[i]);
        }

        printf("%d ", items[i]); // print last elemet where (i == rear) 
        printf("\nRear => %d\n\n", rear);
    }

}

int main() {
    display();
    enQuique(2);
    enQuique(5);
    enQuique(21);
    enQuique(20);
    enQuique(7);
    display();

    printf("Deleted element -> %d\n", deQueue());
    display();
    
    enQuique(99);
    display();
    
    return 0;
    
}