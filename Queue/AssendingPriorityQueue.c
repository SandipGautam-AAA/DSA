#include<stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

int isFull() {
   if(rear == MAX - 1) return 1;
   else return 0; 
}

int isEmpty() {
    if(front == -1) return 1;
    else return 0;
}

void enqueue(int data){
    if(!isFull()){
        if(front == -1) 
            front = 0;

        queue[++rear] = data;
    }
    else{
        printf("Queue is Overflow.\n");
        return;

    }
}

int dequeue() {
    if(isEmpty()){
        printf("Queue is Underflow.\n");
        return -1;
    }
    else{
        int max = queue[0];
        int pos = front;
        // loop to find the largest number
        for(int i = front + 1; i <= rear; i++){
            if(queue[i] > max){
                max = queue[i];
                pos = i;
            }
        }
        // loop to shift the elements of queue
        for(int i = pos; i < rear; i++){
            queue[i] = queue[i + 1];
        }
        --rear;
        return max;
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