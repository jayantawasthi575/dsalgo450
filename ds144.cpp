class Solution{
  public:
    //Function to check whether the list is palindrome.
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
    bool isPalindrome(Node *head)
    {   
        if(head->next==NULL)
        return true;
        Node* slow=head;
        Node* fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        Node* dummy=head;
        int flag=0;
        slow=slow->next;
        slow=reverse(slow);
        while(slow!=NULL)
        {   
           //cout<<slow->data<<" "<<dummy->data<<endl;
            if(slow->data==dummy->data)
            {
                flag=1;
            }else{
                return false;
            }
            dummy=dummy->next;
            slow=slow->next;
        }
        if(flag==1)
        return true;
        
    }
};