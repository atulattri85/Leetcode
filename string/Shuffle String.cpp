class Solution {
public:
    string restoreString(string s, vector<int>& indices) 
    {
        int n=indices.size();
        string s1(n,0);
        for(int i=0;i<n;i++)
        {
            s1[indices[i]]=s[i];
        }
        return s1;
    }
};