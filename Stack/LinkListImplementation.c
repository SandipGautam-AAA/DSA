// Link list impementation of Stack
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head = NULL;

struct Node* createNode(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    return newNode;

}

void push(int data){ // insert at 1st 
    // create a node
    struct Node* newNode = createNode(data);
    
    newNode->next = head;
    head = newNode;
}

int pop(){
    if( head != NULL){   // Remove from 1st
        int info;
        struct Node* temp = head;
        info = temp->data;
        head = head->next;
        free(temp);

        return info;

    }
    else {
        printf("Stack Underflow\n");
        return -1;
    }
}
void display() {
    struct Node* temp = head;  // Start at the head (the "Top")

    if(temp == NULL) {
        printf("Stack is Underflow.\n");
        return;
    }
    printf("--- Stack (Top to Bottom) ---\n");
    while(temp != NULL){
        printf("| %d |\n", temp->data);
        printf("------\n");
        temp = temp->next;
    }
    printf("  NULL (Bottom)");
}

int main() {
    push(10);
    push(20);
    push(30);
    push(40);
    // int x = pop();
    printf("Poped: %d\n", pop());
    display();

}