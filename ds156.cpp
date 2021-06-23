Node *copyList(Node *head) {
    Node* iter=head;
    Node* front=head;
    while(iter!=NULL)
    {
        front=iter->next;
        Node* copy=new Node(iter->data);
        iter->next=copy;
        copy->next=front;
        iter=front;
    }
    iter = head;
    while (iter != NULL) {
        if (iter->arb != NULL) {
          iter->next->arb = iter->arb->next;
        }
        iter = iter->next->next;
    }
    iter=head;
    front=head;
    Node* p=new Node(0);
    Node* copy=p;
    while(iter!=NULL)
    {
        front=iter->next->next;
        copy->next=iter->next;
        iter->next=front;
        copy=copy->next;
        iter=front;
    }
    return p->next;
}