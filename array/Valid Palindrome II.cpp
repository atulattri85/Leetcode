class Solution {
public:
    bool helper(string s,int l,int r)
    {
        while(l<r)
        {
            if(s[l]==s[r])
            {
                l++;
                r--;
            }
            else
            {
               return false;
            }
            
        }
        return true;
       
            
    }
    
    bool validPalindrome(string s) 
    {
        int n=s.size();
        int i=0;
        int j=n-1;
        while(i<j)
        {
            if(s[i]==s[j])
            {
                i++;
                j--;
            }
            else
            {
                 return helper(s,i+1,j)||helper(s,i,j-1);
            }
        }
       return true;
    }
};