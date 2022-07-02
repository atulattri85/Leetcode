class Solution
{
    public:
    Node * removeDuplicates( Node *head) 
    {
        int A[10001];
        for(int i=0;i<10001;i++)
        {
            A[i]=0;
        }
        Node *p=head;
        Node *q=head;
        Node *begin=head;
        if(p->next==NULL)
        {
            return head;
        }
        else
        {
            q=q->next;
            A[begin->data]=1;
            begin=begin->next;
            while(begin!=NULL)
            {
                if(A[begin->data]==0)
                {
                     A[begin->data]=1;
                     p=p->next;
                     q=q->next;
                     begin=begin->next;
                }
                else
                {
                    p->next=q->next;
                    q=p->next;
                    begin=q;
                }
               
            }
            return head;
        }
       
    }
};

