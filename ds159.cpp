Node* reverse(Node* head)
{
Node* current = head;
Node *prev = NULL, *next = NULL;
while (current != NULL) {
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
}
head = prev;
return head;
}
int getNthFromLast(Node *head, int n)
{
       // Your code here
      head=reverse(head);
      Node* temp=head;
      int send=-1;
      while(n!=0&&temp!=NULL)
      {   if(n==1)
          send=temp->data;
          temp=temp->next;
          n--;
      }
      return send;
}