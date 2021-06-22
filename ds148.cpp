#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    struct Node* next, *prev;
};
int countTriplets(struct Node* head, int x)
{
    if(head==NULL)
    return 0;
    cout<<"alpha";
    Node* temp=head;
    Node* tend=head;
    while(tend->next!=NULL)
    tend=tend->next;
    int c=0;
    while(temp->next->next->next!=NULL)
    {   
        Node* start=temp->next;
        Node* end=tend;
        while(end->data>start->data)
        {
            int y=temp->data+start->data+end->data;
            if(y==x)
           {
           c=c+1;
           cout<<temp->data<<" "<<start->data<<" "<<end->data<<endl;
           end=end->prev;
           }
            else if(y>x)
            {
                end=end->prev;
            }
            else{
                 start=start->next;
            }
        }
        temp=temp->next;
    }
    return c;
}
void insert(struct Node** head, int data)
{
    struct Node* temp = new Node();
    temp->data = data;
    temp->next = temp->prev = NULL;
    if ((*head) == NULL)
        (*head) = temp;
    else {
        temp->next = *head;
        (*head)->prev = temp;
        (*head) = temp;
    }
}
int main()
{
    struct Node* head = NULL;
    insert(&head, 9);
    insert(&head, 8);
    insert(&head, 6);
    insert(&head, 5);
    insert(&head, 4);
    insert(&head, 2);
    insert(&head, 1);
    int x = 17;
    cout << "Count = "<<countTriplets(head, x);
    return 0;
}