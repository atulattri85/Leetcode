#include <bits/stdc++.h>
using namespace std;

int max(int a, int b)
{
    if(a>b)
    { 
        return a;
    }
    else      
    {
        return b;
    }
}

int knapSack(int W, int wt[], int val[], int n)
{
    if (n == 0 || W == 0)
        return 0;
  
    if (wt[n - 1] > W)
        return knapSack(W, wt, val, n - 1);
  
    else
        return max( val[n - 1] + knapSack(W - wt[n - 1], wt, val, n - 1), knapSack(W, wt, val, n - 1));
}
  
int main()
{
    int val[] = { 40, 1000, 10 };
    int wt[] = { 11, 15, 5 };
    int W = 25;
    int n = sizeof(val) / sizeof(val[0]);
    cout << knapSack(W, wt, val, n);
    return 0;
}
  