class Solution {
  public:
    int setAllRangeBits(int N , int L , int R) 
    {
        int no=0;
        int p=R-L+1;
        while(p--)
        {
            no=no|1;
            no=no<<1;
        }
        no=no>>1;
        
        L--;
        while(L--)
        {
            no=no<<1;
            
        }
        N=N|no;
        return N;
    }
};