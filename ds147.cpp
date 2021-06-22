#include<bits/stdc++.h>
using namespace std;
 
// structure of node of doubly linked list
struct Node
{
    int data;
    struct Node *next, *prev;
};
void insert(struct Node **head, int data)
{
    struct Node *temp = new Node;
    temp->data = data;
    temp->next = temp->prev = NULL;
    if (!(*head))
        (*head) = temp;
    else
    {
        temp->next = *head;
        (*head)->prev = temp;
        (*head) = temp;
    }
}
void pairSum(struct Node *head, int x)
{
     struct Node* start=head;
     struct Node* end=head;
     while(end->next!=NULL)
     end=end->next;
     while(end->data>start->data)
     {
         int sum=start->data+end->data;
         if(sum==x)
        { cout<<start->data<<" "<<end->data<<endl;
        end=end->prev;
        }
         else if(sum>x)
         end=end->prev;
         else
         start=start->next;
     }
}
int main()
{
    struct Node *head = NULL;
    insert(&head, 9);
    insert(&head, 8);
    insert(&head, 6);
    insert(&head, 5);
    insert(&head, 4);
    insert(&head, 2);
    insert(&head, 1);
    int x = 7;
 
    pairSum(head, x);
 
    return 0;
}