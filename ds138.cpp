 unordered_map<Node*,int>check;
 int flag=-1;
 while(head1!=NULL)
 {
     check[head1]=1;
     head1=head1->next;
 }
 while(head2!=NULL)
 {
     if(check.find(head2)!=check.end())
     {
         flag=head2->data;
         break;
     }
     head2=head2->next;
 }
 return flag;