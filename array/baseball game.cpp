class Solution {
public:
    int calPoints(vector<string>& ops) 
    {
        vector<int> ans;
        int n=ops.size();
        int o=stoi(ops[0]);
        ans.push_back(o);
        int siz=1;
        if(n==1)
        {
            return ans[0];
        }
        else
        {
            if(ops[1]=="D")
            {
                ans.push_back(2*o);
                siz++;
            }
            else if(ops[1]=="C")
            {
                ans.pop_back();
                siz--;
            }
            else
            {
                int oo=stoi(ops[1]);
                ans.push_back(oo);
                siz++;
            }
            for(int i=2;i<n;i++)
            {
                if(ops[i]=="+")
                {
                    ans.push_back(ans[siz-1]+ans[siz-2]);
                    siz++;
                }
                else if(ops[i]=="D")
                {
                    ans.push_back(2*ans[siz-1]);
                    siz++;
                }
                else if(ops[i]=="C")
                {
                    ans.pop_back();
                    siz--;
                }
                else
                {
                    int o=stoi(ops[i]);
                    ans.push_back(o);
                    siz++;
                }
            }
            int sum=0;
            for(int j=0;j<siz;j++)
            {
                sum=sum+ans[j];
            }
            return sum;
        }
    }
};