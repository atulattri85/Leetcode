class Solution
{
public:
    ListNode* middleNode(ListNode* head) 
    {
        ListNode *a;
        a=head;
        int size=0;
        int i;
        while(a!=NULL)
        {
            size++;
            a=a->next;
        }
        if(size%2==0)
        {
            i=size/2+1;
        }
        else
        {
            i=(size+1)/2;
        }
        int k=i-1;
        while(k--)
        {
            head=head->next;
        }
        return head;
    }
};