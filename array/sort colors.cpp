class Solution {
public:
    void sortColors(vector<int>& nums)
    {
        int color0=0;
        int color1=0;
        int color2=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                color0++;
            }
            else if(nums[i]==1)
            {
                color1++;
            }
            else
            {
                color2++;
            }
        }
        int j=0;
        while(color0--)
        {
            nums[j]=0;
            j++;
        }
        while(color1--)
        {
            nums[j]=1;
            j++;
        }
        while(color2--)
        {
            nums[j]=2;
            j++;
        }
        
    }
};