class Solution 
{
public:
    static bool compare(vector<int>v1,vector<int>v2)
    {
        return v1[0]<=v2[0];
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        vector<vector<int>> ans;
        int n=intervals.size();
        sort(intervals.begin(),intervals.end(),compare);
        for(int i=0;i<n-1;)
        {
            if(intervals[i][1]>=intervals[i+1][0])
            {
                if(intervals[i][1]>=intervals[i+1][1])
                {
                    intervals.erase(intervals.begin()+i+1);
                    n--;
                }
                else if(intervals[i][1]<intervals[i+1][1])
                {
                    intervals[i][1]=intervals[i+1][1];
                    intervals.erase(intervals.begin()+i+1);
                    n--;
                }
                else 
                {
                    i++;
                }
            }
            else
            {
                i++;
            }
        }
        return intervals;
    }
};