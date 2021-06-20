class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     unordered_map<int,int> check;
        Node* temp=head;
        Node* prev=head;
        while(temp!=NULL)
        {
            if(check.find(temp->data)==check.end())
            {
                check[temp->data]=1;
                prev=temp;
                temp=temp->next;
            }
            else{
                prev->next=temp->next;
                temp=temp->next;
            }
        }
        return head;
    }
};