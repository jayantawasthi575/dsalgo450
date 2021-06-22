Node* reverseDLL(Node * head)
{
    Node* temp=head;
    while(head!=NULL)
    {   
        temp=head;
        Node* tem=head->next;
        head->next=head->prev;
        head->prev=tem;
        head=head->prev;
    }
    head=temp;
    return head;
}