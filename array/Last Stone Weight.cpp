class Solution 
{
public:
    int lastStoneWeight(vector<int>& stones) 
    {
        int n=stones.size();
        int A[n];
        for(int i=0;i<n;i++)
        {
            A[i]=stones[i];
        }
        sort(A,A+n);
        if(n==1)
        {
            return A[0];
        }
        else
        {
            while(A[n-2]!=0)
        {
            A[n-1]=A[n-1]-A[n-2];
            A[n-2]=0;
            sort(A,A+n);
        }
        return A[n-1];
        }
        
    }
};