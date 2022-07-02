# include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string S;
    cin>>S;
    int count=0;
    int flag=1;
    int ans=0;
    for(int i=0;i<n;)
    {
        if(flag==0 && count==0)
        {
            ans++;
            flag=1;
        }
        else if(S[i]=='1')
        {
            flag=0;
            count++;
            i++;
        }
        else
        {
            flag=0;
            count--;
            i++;
        }
    }
    if(count!=0)
    {
        ans=-1;
    }
    else{
        ans++;
    }
    cout<<ans<<endl;
}
