class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) 
    {
        ListNode *a=head;
        int size=0;
        int i;
        while(a!=NULL)
        {
            size++;
            a=a->next;
        }
        if(size==1)
        {
            return NULL;
        }
        else
        {
             if(size%2==0)
        {
            i=size/2+1;
        }
        else
        {
            i=(size+1)/2;
        }
        int k=i-1;
        k--;
        ListNode *b=head;
        ListNode *c=head;
        while(k--)
        {
            b=b->next;
        }
        c=b->next;
        b->next=c->next;
        return head;
        }
       
    }
};