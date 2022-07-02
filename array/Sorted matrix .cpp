class Solution {
  public:
    vector<vector<int>> sortedMatrix(int n, vector<vector<int>> Mat)
    {
        int A[n*n];
        int put=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                A[put]=Mat[i][j];
                put++;
            }
        }
        sort(A,A+n*n);
        int q=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                Mat[i][j]=A[q];
                q++;
            }
        }
        return Mat;
    }
};