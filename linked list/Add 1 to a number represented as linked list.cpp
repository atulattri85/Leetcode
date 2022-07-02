class Solution
{
    public:
    Node* addOne(Node *head) 
    {
        Node *p=head;
        Node *q=head;
        Node *r=head;
        q=q->next;
        p->next=NULL;
        while(q!=NULL)
        {
            r=q->next;
            q->next=p;
            p=q;
            q=r;
        }
        head=p;

        while(p->data==9)
        {
            if(p->next==NULL)
            {
                Node *qw=new Node(0);
                p->data=0;
                p->next=qw;
                p=qw;
                break;
            }
            else
            {
                  p->data=0;
                p=p->next;
            
            }
          
        }
        p->data++;
        p=head;
        q=head;
        r=head;
        q=q->next;
        p->next=NULL;
        while(q!=NULL)
        {
            r=q->next;
            q->next=p;
            p=q;
            q=r;
        }
        head=p;
        return head;
    }
};
