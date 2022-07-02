#include <bits/stdc++.h>
using namespace std;
 

int minComputation(int size, int files[])
{
    int count=0;
    int sum;
    while(files[1]!=INT_MAX)
    {
        sum=files[0]+files[1];
        count=count+sum;
        files[0]=sum;
        files[1]=INT_MAX;
        sort(files,files+6);
    }
    return count;
}
 
int main()
{
    int n = 6;
 
    int files[] = { 2, 3, 4, 9, 6, 7 };

    cout << "Minimum Computations = "
         << minComputation(n, files);
 
    return 0;
}