class Solution {
  public:
    int findPosition(int N) 
    {
        int count=0;
        int bit=0;
        int index;
        while(N>0)
        {
            int p=N&1;
            bit++;
            if(p==1)
            {
                count++;
                index=bit;
            }
            N=N>>1;
        }
        if(count>1 || count<1)
        {
            return -1;
        }
        else
        {
            return bit;
        }
    }
};