class Solution {
public:
    
    int minimumDeletions(vector<int>& nums) 
    {
        int n=nums.size();
        if(n==1)
        {
            return 1;
        }
        else
        {
             int minindex=0;
        int maxindex=0;
        int min=INT_MAX;
        int max=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>max)
            {
                max=nums[i];
                maxindex=i;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]<min)
            {
                min=nums[i];
                minindex=i;
            }
        }
        int ans1=0;
        if(minindex>maxindex)
        {
            ans1=minindex+1;
        }
        else
        {
            ans1=maxindex+1;
        }
        int ans2=0;
        if(minindex>maxindex)
        {
            ans2=n-maxindex;
        }
        else
        {
            ans2=n-minindex;
        }
        int ans3=0;
        if(minindex<maxindex)
        {
            ans3=minindex+1+n-maxindex;
        }
        else
        {
            ans3=maxindex+1+n-minindex;
        }
        int ans;
        if(ans1<ans2)
        {
            ans=ans1;
        }
        else
        {
            ans=ans2;
        }
        
        if(ans<ans3)
        {
            ans=ans;
        }
        else
        {
            ans=ans3;
        }
        return ans;
        }
       
    }
};