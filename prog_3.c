#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};


struct Node* createNode(int data) //Create new node//
 {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertEnd(struct Node** head, int data) //insert node at end
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
}


void reverseTraversal(struct Node* head) //Traverse using recursion
 {
    if (head == NULL)
        return;
    reverseTraversal(head->next);  // recursive call
    printf("%d ", head->data);  
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

int main() //Main function
 {
    struct Node* head = NULL;
    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);
    insertEnd(&head, 40);

    printf("The original linked List is : ");
    display(head);

    printf("The reeverse traversal is : ");
    reverseTraversal(head);
    printf("\n");

    return 0;
}

