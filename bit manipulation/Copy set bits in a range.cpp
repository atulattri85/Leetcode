# include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,l,r;
    cin>>x>>y>>l>>r;
    int p=r-l+1;
    int no=0;
    while(p--)
    {
        no=no|1;
        no=no<<1;
    }
    no=no>>1;
    l--;
    while(l--)
    {
        no=no<<1;
    }
    int qq=no&y;
    x=x^qq;
    cout<< x<<endl;
}