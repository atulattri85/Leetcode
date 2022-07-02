long long  multiplyTwoLists (Node* l1, Node* l2)
{  int mod=1e9+7;
    long long a=0;
    long long b=0;
    while(l1)
    {
        a=(a%mod*10)%mod+l1->data;
        l1=l1->next;
    }
    while(l2)
    {
        b=(b%mod*10)%mod+l2->data;
        l2=l2->next;
    }
    return (a%mod*b%mod)%mod;
}