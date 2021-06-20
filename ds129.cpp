class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        unordered_map<Node*,int> check;
        Node* temp=head;
        while(temp!=NULL)
        {
            if(check.find(temp)==check.end())
            {
                check[temp]=1;
                temp=temp->next;
            }
            else{
                return 1;
            }
        }
        return 0;
    }
};
