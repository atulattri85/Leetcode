class Solution{
    public:
    // Function to check if given number n is a power of two.
    long long setbits(long long n)
    {
        if(n==0)
        {
            return 0;
        }
        else if(n==1)
        {
            return 1;
        }
        else
        {
            int qq=n&1;
            return qq+setbits(n>>1);
        }
    }
    bool isPowerofTwo(long long n)
    {
        if(n==1)
        {
            return true;
        }
        else
        {
            int set=setbits(n);
            if(set==1)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        
        
    }
};