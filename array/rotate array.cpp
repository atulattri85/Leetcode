class Solution {
public:
    void rotate(vector<int>& nums, int k)
    {
        
        int n=nums.size();
        k=k%n;
        int i=0;
        int j=n-k;
        int ii=j-1;
        while(i<ii)
        {
            int temp=nums[i];
            nums[i]=nums[ii];
            nums[ii]=temp;
            i++;
            ii--;
        }
        int jj=n-1;
        while(j<jj)
        {
            int temp=nums[j];
            nums[j]=nums[jj];
            nums[jj]=temp;
            j++;
            jj--;
        }
        int p=0;
        int q=n-1;
        while(p<q)
        {
            int temp=nums[p];
            nums[p]=nums[q];
            nums[q]=temp;
            p++;
            q--;
        }
    }
};