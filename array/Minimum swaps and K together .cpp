class Solution
{
public:
    int minSwap(int arr[], int n, int k) 
    {
        int count=0;
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=k)
            {
                count++;
            }
        }
        int count2=0;
        for(int i=0;i<count;i++)
        {
            if(arr[i]<=k)
            {
                count2++;
            }
        }
        int min=count-count2;
        int curr;
        int start=0;
        int end=count-1;
        while(end<n-1)
        {
            start++;
            end++;
            if(arr[start-1]<=k)
            {
                count2--;
            }
            if(arr[end]<=k)
            {
                count2++;
            }
            curr=count-count2;
            if(curr<min)
            {
                min=curr;
            }
            
        }
        return min;
    }
};