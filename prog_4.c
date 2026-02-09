#include <stdio.h>
#include<stdio.h>
#include <stdlib.h>

struct Node    //Define a node structure//
 {
    int data;
    struct Node* prev;
    struct Node* next;
};


struct Node* createNode(int data) //First, create new node//
 {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

void insertend(struct Node** head, int data) //insertion at the end portion
 {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;
}


void insertafter(struct Node* head, int key, int data) //Insert after given value 
 {
    struct Node* temp = head;
    while (temp != NULL && temp->data != key)
        temp = temp->next;

    if (temp == NULL) {
        printf("The linked list is empty\n"); //Check the linked list is empty or not 
        return;
    }

    struct Node* newNode = createNode(data);
    newNode->next = temp->next;
    newNode->prev = temp;

    if (temp->next != NULL)
        temp->next->prev = newNode;

    temp->next = newNode;
}


void deletenode(struct Node** head, int key) //Delete the node whose value matches key 
 {
    struct Node* temp = *head;

    while (temp != NULL && temp->data != key)
        temp = temp->next;

    if (temp == NULL) {
        printf("The linked list is empty\n");
        return;
    }

    if (temp->prev != NULL)
        temp->prev->next = temp->next;
    else
        *head = temp->next;  

    if (temp->next != NULL)
        temp->next->prev = temp->prev;

    free(temp);
}


void display(struct Node* head) //Display the list
 {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()   
 {
    struct Node* head = NULL;

    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);

    printf("Original Linked List: ");
    display(head);

    insertafter(head, 20, 25);
    printf("After inserting 25 after 20: ");
    display(head);

    deletenode(&head, 30);
    printf("After deleting 30: ");
    display(head);
    return 0;
}

