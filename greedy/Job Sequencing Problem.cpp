class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    bool static compare(Job &a,Job &b)
    {
        return a.profit>b.profit;
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        int A[n];
        vector<int>v;
        sort(arr,arr+n,compare);
        memset(A,0,n);
        int job=0;
        int pro=0;
        for(int j=0;j<n;j++)
        {
            for(int k=min(n,arr[j].dead-1);k>=0;k--)
            {
                if(A[k]==0)
                {
                    job++;
                    pro=pro+arr[j].profit;
                    A[k]=1;
                    break;
                }
            }
        }
        v.push_back(job);
        v.push_back(pro);
        return v;
    
    } 
};