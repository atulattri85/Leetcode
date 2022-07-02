class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        int siz=x.size();
        stack<char> s;
        int size=0;
        s.push(x[0]);
        size++;
        for(int i=1;i<siz;i++)
        {
            if(size==0)
            {
                 s.push(x[i]);
                 size++;
            }
            else if((x[i]=='}' && s.top()=='{')||(x[i]==')' && s.top()=='(')||(x[i]==']' && s.top()=='['))
            {
                s.pop();
                size--;
            }
            else
            {
                s.push(x[i]);
                size++;
            }
        }
        if(s.size()==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

};