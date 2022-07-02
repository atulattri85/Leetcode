class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    {
        int si=nums.size();
        int i=0;
        int j=1;
        int p;
        int n;
        while(i<si && j<si)
        {
            if(nums[i]>=0)
            {
                i=i+2;
            }
            else
            {
                p=i+1;
                while(nums[p]<0)
                {
                    p++;
                }
                int temp=nums[p];
                int size=p-i+1;
                for(int mo=p;mo>i;mo--)
                {
                    nums[mo]=nums[mo-1];
                }
                nums[i]=temp;
                i=i+2;
            }
            
            if(nums[j]<0)
            {
                j=j+2;
            }
            else
            {
                n=j+1;
                while(nums[n]>0)
                {
                    n++;
                }
                int temp=nums[n];
                int size=p-i+1;
                for(int mo=n;mo>j;mo--)
                {
                    nums[mo]=nums[mo-1];
                }
                nums[j]=temp;
                j=j+2;
            }
        }
        return nums;
    }
};