#include <bits/stdc++.h>
using namespace std;
struct Node {
    char data;
    struct Node* prev;
    struct Node* next;
};
void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node =  new Node;
    new_node->data = new_data;
    new_node->prev = NULL;
    new_node->next = (*head_ref);
    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;
   *head_ref = new_node;
}
void printList(struct Node* node)
{
    while (node->next != NULL) {
        cout << node->data << " "
             << "<=>"
             << " ";
        node = node->next;
    }
    cout << node->data;
}
void rotate(struct Node** head_ref, int N)
{
    Node* temp=*head_ref;
    while(temp->next!=NULL)
    temp=temp->next;
    while(N!=0)
    {
        Node* copy=temp;
        temp->next=*head_ref;
        temp->prev->next=NULL;
        *head_ref=temp;
        temp=copy->prev;
        N--;
    }
}
int main(void)
{
    /* Start with the empty list */
    struct Node* head = NULL;
 
    /* Let us create the doubly
      linked list a<->b<->c<->d<->e */
    push(&head, 'h');
    push(&head, 'g');
    push(&head, 'f');
    push(&head, 'e');
    push(&head, 'd');
    push(&head, 'c');
    push(&head, 'b');
    push(&head, 'a');
 
    int N = 4;
 
    cout << "Given linked list \n";
    printList(head);
    rotate(&head, N);
 
    cout << "\nRotated Linked list \n";
    printList(head);
 
    return 0;
}