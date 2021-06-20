class Solution
{
    public:
     Node* reverse(Node* head)
    {
        Node* current=head;
        Node* prev=NULL,*next=NULL;
        while(current!=NULL)
        {
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
        }
        head=prev;
        return head;
    }
    void print(Node* head){
        struct Node* temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
    Node* addOne(Node *head) 
    {
        //print(head);
        //cout<<endl;
        head=reverse(head);
        // print(head);
        // cout<<endl;
        Node* temp=head;
        int inc=1;
        while(temp->next!=NULL)
        {   temp->data=temp->data+inc;
            if(temp->data==10)
            {
                temp->data=0;
                inc=1;
                temp=temp->next;
            }
            else{
                inc=0;
                temp=temp->next;
            }
        }
        temp->data=temp->data+inc;
        head=reverse(head);
        return head;
    }
};
