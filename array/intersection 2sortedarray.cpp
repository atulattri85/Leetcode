class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
    {
        int n=nums1.size();
        int m=nums2.size();
        vector<int> ans;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0;
        int j=0;
        while(i<n && j<m)
        {
            if(nums1[i]==nums2[j])
            {
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]<nums2[j])
            {
                i++;
            }
            else
            {
                j++;
            }
        }
        int size=ans.size();
        vector<int> ans2;
        if(size==0 )
        {
            return ans2;
        }
        else if( size==1)
        {
            ans2.push_back(ans[0]);
            return ans2;
        }
        else
        {
             for(int j=0;j<size-1;)
            {
                if(ans[j]==ans[j+1])
                {
                    j++;
                }
                else
                {
                    ans2.push_back(ans[j]);
                    j++;
                }
            }
            ans2.push_back(ans[size-1]);
            return ans2;
        }
       
    }
};