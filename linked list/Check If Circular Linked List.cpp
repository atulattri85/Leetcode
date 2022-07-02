bool isCircular(struct Node *head)
{
    int count=0;
    struct Node *p=head;
    if(p->next==p || p==NULL)
    {
        return true;
    }
    p=p->next;
    while(p!=NULL && count<150)
    {
        if(p==head)
        {
            return true;
        }
        else
        {
             p=p->next;
            count++;
        }
       
    }
    return false;
}
