# include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    string s2;
    string s3;
    cin>>s1>>s2>>s3;
    int n1=s1.size();
    int n2=s2.size();
    int n3=s3.size();
    int flag=1;
    if(n3!=n1+n2)
    {
        flag=0;
    }
    else
    {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        sort(s3.begin(),s3.end());
        int i=0;
        int j=0;
        int k=0;
        while(i<n1 && j<n2)
        {
            if(s3[k]==s1[i])
            {
                k++;
                i++;
            }
            else if(s3[k]==s2[j])
            {
                k++;
                j++;
            }
            else
            {
                flag=0;
                break;
            }
        }
        for( i;i<n1;)
        {
            if(s3[k]==s1[i])
            {
                i++;
                k++;
            }
            else{
                flag=0;
                break;
            }
        }
        for(j;j<n2;)
        {
            if(s3[k]==s2[j])
            {
                j++;
                k++;
            }
            else{
                flag=0;
                break;
            }
        }    
    }
    if(flag==1)
        {
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
}