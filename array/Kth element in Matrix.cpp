int kthSmallest(int mat[MAX][MAX], int n, int k)
{
    int A[n*n];
    int put=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            A[put]=mat[i][j];
            put++;
        }
    }
    sort(A,A+n*n);
    int ans=A[k-1];
    return ans;
}