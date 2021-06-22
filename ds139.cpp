class Solution{
  public:
     void splitList(Node* source, Node** frontRef, Node** backRef) {
        struct Node* fast;
        struct Node* slow;
        if (source == NULL || source->next == NULL) {
            *frontRef = source;
            *backRef = NULL;
        } else {
            slow = source;
            fast = source->next;
            while (fast != NULL) {
                fast = fast->next;
                if (fast != NULL) {
                    slow = slow->next;
                    fast = fast->next;
                }
            }
            *frontRef = source;
            *backRef = slow->next;
            slow->next = NULL;
        }
    }
     Node* mergeList(struct Node* a, struct Node* b) {
        struct Node* result = NULL;
        if (a == NULL)
            return (b);
        else if (b == NULL)
            return (a);
        if (a->data <= b->data) {
            result = a;
            result->next = mergeList(a->next, b);
        } else {
            result = b;
            result->next = mergeList(a, b->next);
        }
        return (result);
    }
    Node* mergeSort(Node* head) {
        struct Node* a;
        struct Node* b;
        if (head == NULL || head->next == NULL) 
           return head;
        splitList(head, &a, &b);
        a = mergeSort(a);
        b = mergeSort(b);
        return mergeList(a, b);
    }
};
