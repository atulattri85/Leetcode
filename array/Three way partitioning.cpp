string isSubset(int a1[], int a2[], int n, int m) 
{
    int n1=pow(10,5);
    int A[n1];
    for(int i=0;i<n1;i++)
    {
        A[i]=1;
    }
    for(int i=0;i<n;i++)
    {
        A[a1[i]-1]++;
    }
    for(int i=0;i<m;i++)
    {
        A[a2[i]-1]--;
        A[a2[i]-1]--;
    }
    int count=0;
    for(int i=0;i<n1;i++)
    {
        if(A[i]==0)
        {
            count++;
        }
    }
    string y="Yes";
    string n2="No";
    if(count==m)
    {
        return y;
    }
    else
    {
        return n2;
        
    }
}