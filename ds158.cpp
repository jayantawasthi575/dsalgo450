class Solution{
public:
    Node* divide(int N, Node *head){
        Node* even=new Node(0);
        Node* move=even;
        Node* odd=new Node(0);
        Node* move1=odd;
        Node* temp=head;
        while(temp!=NULL)
        {   
            if(temp->data%2==0)
            {
            Node* new_node = new Node(temp->data);
            new_node->next = move->next;
            move->next = new_node;
            move=move->next;
            //even->next=temp;
            //even=even->next;
            }
            else if(temp->data%2==1)
            {   
              Node* new_node = new Node(temp->data);
              new_node->next = move1->next;
              move1->next = new_node;
              move1=move1->next;
            }
            temp=temp->next;
        }
        temp=head;
        even=even->next;
        odd=odd->next;
        while(even!=NULL)
        {
            temp->data=even->data;
            temp=temp->next;
            even=even->next;
        }
        while(odd!=NULL)
        {
            temp->data=odd->data;
            temp=temp->next;
            odd=odd->next;
        }
        //cout<<endl;
       // move=move->next;
        //move1=move1->next;
        return head;
    }
};