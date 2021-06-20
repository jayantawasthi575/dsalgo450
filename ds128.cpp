class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        int m=0;
        node* current=head;
        node* prev=NULL,*next=NULL;
        node* temp,*hold;
        int flag=0;
        while(current!=NULL)
        {   
  
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
            m++;
            if(flag==0)
            {
                temp=prev;
            }
            if(current==NULL&&m!=k)
            {
                head->next=prev;
            }
            if(m==k)
            {   
                if(flag==0)
                {temp=prev;
                hold=current;
                prev=NULL;
                next=NULL;
                 flag=1;
                 m=0;
                }
                else{
                   head->next=prev;
                   head=hold;
                   prev=NULL;
                   next=NULL;
                   m=0;
                   hold=current;
                }
                m=0;
            }
        }
        head=temp;
    }
};
