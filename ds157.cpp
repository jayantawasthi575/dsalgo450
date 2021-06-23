class Solution
{
    public:
    Node* reverse(Node* head)
    {
    Node* current = head;
    Node *prev = NULL, *next = NULL;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
    }
    Node *compute(Node *head)
    {
         head=reverse(head);
         Node* temp=head;
         int max=temp->data;
         Node* prev=temp;
         temp=temp->next;
         while(temp!=NULL)
         {    
             if(temp->data>=max)
             {
                 max=temp->data;
                 prev=temp;
             }
             else{
                 prev->next=temp->next;
             }
             //cout<<temp->data<<" ";
             temp=temp->next;
             
         }
        // cout<<endl;
         head=reverse(head);
         return head;
    }
};