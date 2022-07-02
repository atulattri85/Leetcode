class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int n=nums.size();
        int currsum=0;
        int max=INT_MIN;
        for(int i=0;i<n;i++)
        {
            currsum=currsum+nums[i];
            if(currsum>max)
            {
                max=currsum;
            }
            if(currsum<0)
            {
                currsum=0;
            }
        }    
        return max;
    }
};