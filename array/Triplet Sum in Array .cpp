Class Solution{
    public:
  
    bool find3Numbers(int A[], int n, int X)
    {
        sort(A,A+n);
        int flag=0;
        int j;
        int k;
        for(int i=0;i<n-2;i++)
        {
            j=i+1;
            k=n-1;
            while(j<k)
            {
                if(A[i]+A[j]+A[k]==X)
                {
                    flag=1;
                    break;
                }
                else if(A[i]+A[j]+A[k]>X)
                {
                    k--;
                }
                else
                {
                    j++;
                }
            }
            if(flag==1)
            {
                break;
            }
        }
        if(flag==1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

};
