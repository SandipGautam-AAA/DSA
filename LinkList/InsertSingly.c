#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to create a node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// I. Function to Insert at first Position 
struct Node* insetAtFirst(struct Node* head, int data){

    // 1. Create a new node
    struct Node* newNode = createNode(data);

    // 2. Point the new node's next to the current head
    newNode->next = head;

    // 3. Update the head to point to the new node
    return newNode; // New node is now the head
}

// II. Function to Insert at Kth Position
struct Node* insertAtK(struct Node* head, int data, int k){
    
    
    // 1. Handel insertion at the Head(position 1)
    if(k == 1){
        return insetAtFirst(head, data);
    }
    
    // 2. Move to the (k-1)th position
    struct Node* temp = head;
    for(int i = 1; i < k-1 && temp != NULL; i++){
        temp = temp->next;
    }
    // 3. check if Position is valid 
    if(temp == NULL){
        printf("Position out of Bound\n");
        return head;
    }
    // 4. Create node
    struct Node* newNode = createNode(data);

    // 5. Perform the "HeandShake"
    newNode->next = temp->next;
    temp->next = newNode;

    return head;

}

// III. Function to Insert at End Position
struct Node* InsertAtEnd(struct Node* head, int data){
    // Create a new node
    struct Node* newNode = createNode(data);
    
    // Safety: check if createNode succeeded
    if (newNode == NULL) return head;

    // Case 1: List is empty
    if(head == NULL) return newNode;  

    // Case 2: Traverse to the last node
    struct Node* temp = head;
    while(temp->next != NULL){
     temp = temp->next;
    }

    // Link the last node to the new node
    temp->next = newNode;
    return head;
}
void printList(struct Node* head){  
    struct Node* temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
    
}

int main() {
    struct Node* head = NULL;

    // Adding some initial data
    head = insertAtK(head, 10, 1); // List: 10
    head = insertAtK(head, 20, 2); // List: 10 -> 20
    head = insertAtK(head, 30, 2); // List: 10 -> 30 -> 20 (Inserted at 2nd)
    head = insertAtK(head, 5, 1);  // List: 5 -> 10 -> 30 -> 20 (Inserted at 1st)

    head = insetAtFirst(head, 15); // List: 15 -> 5 -> 10 -> 30 -> 20 (Inserted at 1st)

    head = InsertAtEnd(head, 50); // List: 15 -> 5 -> 10 -> 30 -> 20 -> 50 (Inserted at End)
    printList(head);


    return 0;
}