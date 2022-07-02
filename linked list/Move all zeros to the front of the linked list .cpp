void moveZeroes(struct Node **head1)
{   
     Node *head=head1[0];
     Node *p=head;
     Node *q=head;
    int count0=0;
    // while(p!=NULL && p->data==0)
    // {
    //     count0++;
    //     p=p->next;
    // }
    head=p;
    q=p;
    q=q->next;
    while(q!=NULL)
    {
        if(q->data==0)
        {
            p->next=q->next;
            q=p->next;
            count0++;
        }
        else
        {
            p=p->next;
            q=q->next;
        }
    }
    while(count0--)
    {    
         Node *a=new Node(0);
         a->next=head1[0];
         head1[0]=a;
    }
    
}
