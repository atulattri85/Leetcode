Node* reverseDLL(Node * head)
{
    Node *r;
    Node *p=head;
    Node *q=head;
    if(q->next==NULL)
    {
        return p;
    }
    q=q->next;
    
        p->next=NULL;
        p->prev=q;
    r=p;
    p=q;
    while(p!=NULL)
    {
        q=q->next;
        p->next=r;
        p->prev=q;
        r=p;
        p=q;
    }
    return r;
}
