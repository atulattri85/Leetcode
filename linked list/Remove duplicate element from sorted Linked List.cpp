void removeDuplicates(struct Node* head)
{
    struct Node* p=head;
    struct Node* q=head;
    if(p->next==NULL)
    {
    
    }
    else
    {
        q=q->next;
        while(q!=NULL)
        {
            if(p->data==q->data)
            {
                p->next=q->next;
                q=p->next;
            }
            else
            {
                p=p->next;
                q=q->next;
            }
        }
       
    }
    
}
