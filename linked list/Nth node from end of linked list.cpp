int getNthFromLast(Node *head, int n)
{
       Node *p=head;
       int count=0;
       while(p)
       {
           count++;
           p=p->next;
       }
       if(n>count)
       {
           return -1;
       }
       else
       {
           count=count-n;
       while(count--)
       {
           head=head->next;
       }
       return head->data;count=count-n;
       
       }
       
}

