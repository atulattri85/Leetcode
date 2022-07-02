class Solution {
public:
    ListNode *detectCycle(ListNode *head)
    {
        ListNode* ans=NULL;
        ListNode *p=head;
        ListNode *q=head;
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
            ListNode *start=head;
            while(p->next!=start)
            {
                p=p->next;
                start=start->next;
            }
            ans=start;
            return ans;
        }
        else
        {
            return ans;
        }
    }
};