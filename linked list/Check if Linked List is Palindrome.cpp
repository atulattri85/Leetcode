class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        int count=0;
        Node *p=head;
        Node *q=head;
        Node *r;
        Node *s;
        while(p!=NULL)
        {
            count++;
            p=p->next;
        }
        int ans;
        if(count%2==1)
        {
            ans=count/2;
            while(ans--)
            {
                q=q->next;
            }
            r=q->next;
            while(r!=NULL)
            {
                s=r->next;
                r->next=q;
                q=r;
                r=s;
            }
            
            Node *qq=head;
            while(qq!=q)
            {
                if(qq->data != q->data)
                {
                    return false;
                }
                else
                {
                    qq=qq->next;
                    q=q->next;
                }
            }
            return true;
        }
        else
        {
            ans=(count-1)/2;
            while(ans--)
            {
                q=q->next;
            }
            r=q->next;
            while(r!=NULL)
            {
                s=r->next;
                r->next=q;
                q=r;
                r=s;
            }
            
            Node *qq=head;
            while(q->next!=qq)
            {
                if(qq->data != q->data)
                {
                    return false;
                }
                else
                {
                    qq=qq->next;
                    q=q->next;
                }
            }
            if(qq->data == q->data)
            {
                return true;
            }
            else
            {
                return false;
            }
            
        }
        
        
       
    }
};
