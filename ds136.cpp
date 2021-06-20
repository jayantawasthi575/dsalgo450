class Solution
{
    public:
    //Function to add two numbers represented by linked list.
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
    void push(Node** head_ref, int new_data)
    {
        Node* new_node = new Node(new_data);
        //new_node->data = new_data;
        new_node->next = (*head_ref);
        (*head_ref) = new_node;
    }
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {   
        
        Node* temp1=reverse(first);
        Node* temp2=reverse(second);
        Node* temp=NULL;
        int inc=0;
        int flag=0;
        Node* head=NULL;
        while(temp1!=NULL && temp2!=NULL)
        {
            int data=temp1->data+temp2->data+inc;
            if(data>=10)
            {   
                int in=data%10;
                push(&head,in);
                inc=data/10;
                temp1=temp1->next;
                temp2=temp2->next;
            }
            else{
                push(&head,data);
                //temp=temp->next;
                inc=0;
                temp1=temp1->next;
                temp2=temp2->next;
            }
        }
        Node* move;
        if(temp1==NULL)
        move=temp2;
        else
        move=temp1;
        while(move!=NULL)
        {   
            int data=move->data+inc;
            if(data>=10)
            {   
                int in=data%10;
                push(&head,in);
                inc=data/10;
            }
            else{
                push(&head,data);
                inc=0;
            }
            move=move->next;
            flag=1;
        }
        if(inc==1)
        push(&head,inc);
        return head;
    }
};
