# include<bits/stdc++.h>
using namespace std;
bool isSafe(int A[n][n],int i,int col)
{
    for(int i=0;i<n;i++)
    {
        if(A[i][col])
        {
            return false;
        }
        else if()
    }
}
bool fun(int A[n][n] ,int col,int n)
{
    if(col>=n)
    {
        return true;
    }
    else
    {
        for (int i = 0; i < n; i++) 
        {
            if (isSafe(A, i, col)) 
            {
                
                A[i][col] = 1;
                if (fun(A, col + 1))
                    return true;
                A[i][col] = 0; 
            }
        }
        return false;
    }
}
bool nqueen(int n)
{
    int A[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            A[i][j]=0;
        }
    }
    int col=0;
    return fun(A,col,n);
}
int main()
{
    int n;
    cin>>n;
    nqueen(n);
}