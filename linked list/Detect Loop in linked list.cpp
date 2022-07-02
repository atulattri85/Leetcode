class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        Node *p=head;
        Node *q=head;
        if(p->next==NULL || p->next->next==NULL)
        {
            
            return false;
            
        }
        if(p->next==p)
        {
            return true;
        }
        int flag=0;
        int ans=0;
        while(flag==0 || p!=q)
        {
            if(q==NULL || q->next==NULL|| q->next->next==NULL)
            {
                return false;
            }
            p=p->next;
            q=q->next;
            q=q->next;
           
             flag=1;
        }
         if(flag==1)
            {
                return true;
            }
        return false;
    }
};