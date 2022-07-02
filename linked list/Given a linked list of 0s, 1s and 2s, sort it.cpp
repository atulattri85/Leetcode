class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) 
    {
        int count0=0;
        int count1=0;
        int count2=0;
        Node *p=head;
        while(p!=NULL)
        {
            if(p->data==0)
            {
                count0++;
            }
            else if(p->data==1)
            {
                count1++;
            }
            else
            {
                count2++;
            }
            p=p->next;
        }
        Node *q=head;
        while(q!=NULL)
        {
            if(count0>0)
            {
                q->data=0;
                q=q->next;
                count0--;
            }
            else if(count1>0)
            {
                q->data=1;
                q=q->next;
                count1--;
            }
            else
            {
                 q->data=2;
                q=q->next;
                count2--;
            }
        }
        return head;
    }
};
