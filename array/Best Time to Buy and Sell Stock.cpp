class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int n=prices.size();
        int max1[n];
        int max=INT_MIN;
        int val;
        int put=n-1;
        for(int i=n-1;i>=0;i--)
        {
            val=prices[i];
            if(val>max)
            {
                max=val;
            }
            max1[put]=max;
            put--;
        }
        int maxp=INT_MIN;
        int v;
        for(int j=0;j<n;j++)
        {
            v=max1[j]-prices[j];
            if(v>maxp)
            {
                maxp=v;
            }
        }
        if(maxp>0)
        {
             return maxp;
        }
        else
        {
            return 0;
        }
    }
};