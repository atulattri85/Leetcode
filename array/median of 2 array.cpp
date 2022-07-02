class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
    {
        int n=nums1.size();
        int m=nums2.size();
        int A[m+n];
        int i=0;
        int j=0;
        int put=0;
        while(i<n && j<m)
        {
            if(nums1[i]<=nums2[j])
            {
                A[put]=nums1[i];
                put++;
                i++;
            }
            else
            {
                A[put]=nums2[j];
                put++;
                j++;
            }
        }
        while(i<n)
        {
            A[put]=nums1[i];
            put++;
            i++;
        }
        while(j<m)
        {
            A[put]=nums2[j];
            put++;
            j++;
        }
        double ans;
        if((n+m)%2==1)
        {
            ans=A[(n+m)/2];
        }    
        else
        {
            ans=(double)(A[(n+m)/2]+A[(n+m)/2-1])/2;
        }
        return ans;
    }
};