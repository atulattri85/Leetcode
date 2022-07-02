class Solution {
public:
    bool isPalindrome(string s) 
    {
        string a;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(isdigit(s[i])==true)
            {
                a.push_back(s[i]);
            }
            else if((s[i]<=122 && s[i]>=97)||(s[i]>=65 && s[i]<=90))
            {
                a.push_back(s[i]);
            }
        }
        int size=a.size();
        int q=0;
        int w=size-1;
        int flag=0;
        while(q<w)
        {
            if(a[q]<=122 && a[q]>=97)
            {
                if(a[w]==a[q] || a[w]==a[q]-32)
                {
                    q++;
                    w--;
                }
                else
                {
                    flag=1;
                    break;
                }
            }
            else if(a[q]<=90 &a[q]>=65)
            {
                if(a[w]==a[q] || a[w]==a[q]+32)
                {
                    q++;
                    w--;
                }
                else
                {
                    flag=1;
                    break;
                }
            }
            else if(a[q]==a[w])
            {
                q++;
                w--;
            }
            else
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            return true;
        }
        else
        {
            return false;
        }    
        
        
    }
};