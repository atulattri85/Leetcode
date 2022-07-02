class Solution {
  public:
    int countSquares(int N) 
    {
        int p=pow(N,.5);
        if(p*p==N)
        {
            return p-1;
        }
        else
        {
            return p;
        }
        
    }
};