class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        Node *p=head;
        Node *q=head;
      
        if(p->next==p)
        {
            p->next=NULL;
        }
        else if(p->next->next==p)
        {
            p->next->next=NULL;
        }
        else
        {
            int flag=0;
            while(flag==0 || q->next!=p)
            {
               if(q==NULL || q->next==NULL || q->next->next==NULL)
               {
                   flag=0;
                   break;
               }
                p=p->next;
                q=q->next;
                q=q->next;
               
                 flag=1;
            }
            if(flag==1)
            {
                Node * start=head;
                while(p->next!=start)
                {
                    start=start->next;
                    p=p->next;
                }
                p->next=NULL;
                 
            }
        }
    }
};