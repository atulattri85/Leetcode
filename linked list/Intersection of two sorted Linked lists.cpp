Node* findIntersection(Node* head1, Node* head2)
{
     Node *headans;
    int flag=0;
    Node *p=head1;
    Node *q=head2;
    Node *qq;
    while(p!=NULL && q!=NULL)
    {
        if(p->data == q->data)
        {
            if(flag==0)
            {
                Node *ans=new Node(p->data);
                flag=1;
                headans=ans;
                qq=ans;
                p=p->next;
                q=q->next;
            }
            else
            {
                 Node *ans1=new Node(p->data);
                 qq->next=ans1;
                 qq=ans1;
                  p=p->next;
                q=q->next;
            }
        }
        else if(p->data>q->data)
        {
            q=q->next;
        }
        else
        {
            p=p->next;
        }
    }
    return headans;
}