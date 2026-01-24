#include<stdio.h>

#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

int isEmpty(){
    return (front == -1 || front > rear);
}

int isFull() {
    return (rear == MAX - 1);
}

void enqueue(int data){
    if(isFull()){
        printf("Queue is Overflow\n");
        return;
    }
    else {
        if(front == -1)
            front = 0;
        
        queue[++rear] = data;
    }
}

int dequeue() {
    if(isEmpty()){
        printf("Queue is Underflow.\n");
        return -1;
    }
    else {
        int min = queue[front];
        int pos = front;
        // finding smallest num
        for(int i = front + 1; i <= rear; i++ ){
            if(queue[i] < min){
                min = queue[i];
                pos = i;
            }
        }

        // shifting 
        for(int i =  pos; i < rear; i++ ){
            queue[i] = queue[i + 1];
        }
        rear--;

        if(rear < front)
            front = -1;
         return min;
    }
}


void display() {
    printf("The element in Queue: ");
    for(int i = 0; i <= rear; i++){
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {

    enqueue(5);
    enqueue(20);
    enqueue(6);
    enqueue(23);
    enqueue(22);
    display();
    printf("Removed -> %d\n",dequeue());
    display();

    return 0;
}