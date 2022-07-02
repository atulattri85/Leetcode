class Solution {
public:
    vector<vector<int>> generateMatrix(int n) 
    {
         vector<vector<int>> ans(n,vector<int>(n));
        int t=0;
        int b=n-1;
        int l=0;
        int r=n-1;
        int put=1;
        while(t<=b && l<=r)
        {
            int x=t;
            int y;
            for(int y=l;y<=r;y++)
            {
                ans[x][y]=put;
                put++;
            }
            t++;
            y=r;
            for(int x=t;x<=b;x++)
            {
                ans[x][y]=put;
                put++;
            }
            r--;
            x=b;
            for(int y=r;y>=l;y--)
            {
                ans[x][y]=put;
                put++;
            }
            b--;
            y=l;
            for(int x=b;x>=t;x--)
            {
                ans[x][y]=put;
                put++;
            }
            l++;
        }
        return ans;
    }
};