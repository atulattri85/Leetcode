int intersectPoint(Node* head1, Node* head2)
{
    int ans=-1;
    Node *p=head1;
    Node *q=head2;
    while(p!=NULL && q!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    int countq=0;
    int countp=0;
    Node *pp=head1;
    Node *qq=head2;
    if(p==NULL)
    {
        while(q!=NULL)
        {
            countq++;
            q=q->next;
        }
      
        while(countq--)
        {
            qq=qq->next;
        }
        while(pp!=NULL && qq!=pp)
        {
            pp=pp->next;
            qq=qq->next;
        }
        if(pp==qq)
        {
             ans=pp->data;
        }
         
    }
    else
    {
        while(p!=NULL)
        {
            countp++;
            p=p->next;
        }
        
        while(countp--)
        {
            pp=pp->next;
        }
        while(pp!=NULL && qq!=pp)
        {
            pp=pp->next;
            qq=qq->next;
        }
        if(pp=qq)
        {
              ans=pp->data;
        }
      
    }
    return ans;
}
