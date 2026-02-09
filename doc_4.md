Documentation of question no 3

&nbsp;

1\) Data structures defined

-data =here data stores values.

-prev= it points to previous node

-next= It points to next node

-head =It points to the first node of the doubly linked list.



2\) Functions Implementations

createnode(int data)

=Creates a new doubly linked list node and initializes pointers.



insertend(struct Node\*\* head, int data)

=Inserts a new node at the end of the list.



insertafter(struct Node\* head, int key, int data)

=Inserts a new node after the node containing key.



deleteNode(struct Node\*\* head, int key)

=Deletes the node whose value matches key.



display(struct Node\* head)

=Displays all nodes from start to end.



3\) Overview of main function main()

Fist it creates an empty linked list then insert node with values inserts nodes with values 10, 20, 30. Now it inserts 25 after node 20 and deletes node 30 and at last displays the list after each operation.



4\) Sample Output

Original Linked list: 10 20 30

After inserting 25 after 20: 10 20 25 30

After deleting 30: 10 20 25

