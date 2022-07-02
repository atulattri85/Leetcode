class Solution
{
public:
    int search(vector<int>& nums, int target) 
    {
        int n=nums.size(); 
        int i=0;
        int j=n-1;
        int mid;
        int k=0;
        while(i<=j)
        {
            mid=(i+j)/2;
            if(nums[0]<=nums[mid])
            {
                i=mid+1;
            }
            else
            {
                k=mid;
                j=mid-1;
            }
        }
       
        int aaa=-1;
        if(k==0)
        {
            int q=0;
            int w=n-1;
            int mid1;
                while(q<=w)
                {
                    mid1=(q+w)/2;
                    if(nums[mid1]==target)
                    {
                        aaa=mid1;
                        break;
                    }
                    else if(nums[mid1]>target)
                    {
                        w=mid1-1;
                    }
                    else
                    {
                        q=mid1+1;
                    }
                }
        }
        else
        {
            if(target>=nums[0])
            {
                int q=0;
                int w=k-1;
                int mid1;
                while(q<=w)
                {
                    mid1=(q+w)/2;
                    if(nums[mid1]==target)
                    {
                        aaa=mid1;
                        break;
                    }
                    else if(nums[mid1]>target)
                    {
                        w=mid1-1;
                    }
                    else
                    {
                        q=mid1+1;
                    }
                }
            }
            else
            {
                int q=k;
                int w=n-1;
                int mid1;
                while(q<=w)
                {
                    mid1=(q+w)/2;
                    if(nums[mid1]==target)
                    {
                        aaa=mid1;
                        break;
                    }
                    else if(nums[mid1]>target)
                    {
                        w=mid1-1;
                    }
                    else
                    {
                        q=mid1+1;
                    }
                }
            }
        }
        return aaa;
    }
};