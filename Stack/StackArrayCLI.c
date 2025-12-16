#include<stdio.h>
#define MAX 50

int top = -1; // empty stack
int stack[MAX];

int isempty(){
    if(top == -1){
        return 1;
    } else {
        return 0;
    }
}

int isfull() {
    if(top == MAX-1) {
        return 1;
    } else {
        return 0;
    }
}

void push(int data){
    if(!isfull()){
        stack[++top] = data;
        printf("Pushed: %d", data);
    } else {
        printf("Stack is OverFlow:\n");
    }
}

void pop() {
    if(!isempty()) {
        int data = stack[top];
        printf("Popped: %d", data);
    } else {
        printf("Stack is Underdflow");
    }
}

void display(){
    if(!isempty()){
        for(int i = top; i > -1; i--){
            printf("%d \n", stack[i]);
        }
    } else {
        printf("Stack is UnderlLo.\n");
    }
}

void peek(){
    if(!isempty()) {
        printf("Peak: %d\n", stack[top]);
    } else {
        printf("Stack is UnderFlow.\n");
    } 
}

int main() {
    
    do{
        printf("+----------------------+\n");
        printf("|      STACK MENU      |\n");
        printf("+----------------------+\n");
        printf("|  P[O]p               |\n");
        printf("|  P[U]sh              |\n");
        printf("|  P[E]ek              |\n");
        printf("|  P[I]splay           |\n");
        printf("|  E[X]it              |\n");
        printf("+----------------------+\n");

        char choice;
        printf("Enter your Choice: ");
        scanf("%s", &choice);

        if(choice == 'o' || choice == 'O') {
            pop();
        } else if (choice == 'U' || choice =='u'){
            int data;
            printf("Enter the number: ");
            scanf("%d", &data);
            push(data);
        } else if(choice == 'E' || choice == 'e') {
            peek();
        } else if (choice == 'I' || choice == 'i') {
            display();
        } else if (choice == 'X' || choice == 'x') {
            printf("Exiting.....");
            break;
        } else {
            printf("Invalid choice. Try again.");
        }

    } while(1);

    return 0;
}