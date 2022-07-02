class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        string ans;
        int i=0;
        int n=S.size();
        if(n==1)
        {
            ans.push_back(S[i]);
            return ans;
        }
        else
        {
            for(i=0;i<n-1;)
            {
                if(S[i]==S[i+1])
                {
                    i++;
                }
                else
                {
                    ans.push_back(S[i]);
                    i++;
                }
            }
            ans.push_back(S[n-1]);
            return ans;
            
        }
       
    }
};