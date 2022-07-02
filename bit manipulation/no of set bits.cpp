class Solution {
  public:
    int setBits(int N) 
    {
        if(N==0)
        {
            return 0;
        }
        else if(N==1)
        {
            return 1;
        }
        else
        {
            int p=N&1;
            
            return p +setBits(N>>1);
        }

    }
};