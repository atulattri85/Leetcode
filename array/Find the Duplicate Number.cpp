class Solution {
public:
    int findDuplicate(vector<int>& nums)
    {
        int m=nums.size();
        int n=m-1;
        int A[n];
        int ans;
        for(int j=0;j<n;j++)
        {
            A[j]=0;
        }
        for(int i=0;i<m;i++)
        {
            int mark=nums[i];
            mark--;
            if(A[mark]==1)
            {
                ans=mark+1;
                break;
            }
            else
            {
                A[mark]=1;
            }
        }
        return ans;
    }
};