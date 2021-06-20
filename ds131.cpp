Node *removeDuplicates(Node *head)
{
  Node* temp=head;
  Node* temp1=head;
  int prev=temp->data;
  temp=temp->next;
  while(temp!=NULL)
  {
     if(prev==temp->data)
     {
         temp1->next=temp->next;
         temp=temp->next;
     }
     else{
         prev=temp->data;
         temp1=temp1->next;
         temp=temp->next;
     }
  }
  return head;
}