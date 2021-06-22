void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
   Node* slow=head;
   Node* fast=head;
   fast=fast->next;
   int n=1;
   while(fast!=head)
   {
       slow=slow->next;
       fast=fast->next;
       n++;
   }
   if(n%2==0)
   n=n/2;
   else
   n=n/2 + 1;
   Node* mid=head;
   int count=1;
   while(count<n)
   {
       mid=mid->next;
       count++;
   }
   *head1_ref=head;
   *head2_ref=mid->next;
   mid->next=*head1_ref;
   slow->next=*head2_ref;
}