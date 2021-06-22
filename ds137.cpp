void append(Node** head_ref, int new_data)
{
    Node* new_node = new Node(new_data);
    Node *last = *head_ref;
    //new_node->data = new_data;
    //new_node->next = NULL;
    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }
    while (last->next != NULL)
        last = last->next;
    last->next = new_node;
    return;
}

Node* findIntersection(Node* head1, Node* head2)
{
    Node* head3=NULL;
    int i=0,j=0;
    while(head1!=NULL && head2!=NULL)
    {
        if(head1->data>head2->data)
        {
            head2=head2->next;
        }else if(head2->data>head1->data)
        {
            head1=head1->next;
        }else{
            append(&head3,head1->data);
            head1=head1->next;
            head2=head2->next;
        }
    }
    return head3;
}