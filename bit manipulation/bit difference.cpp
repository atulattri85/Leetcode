class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int setbits(int n)
    {
        if(n==1)
        {
            return 1;
        }
        else if(n==0)
        {
            return 0;
        }
        else
        {
            int p=n&1;
            return p+setbits(n>>1);
        }
        
    }
    int countBitsFlip(int a, int b)
    {
        int xoor=a^b;
        int set=setbits(xoor);
        return set;
    }
};