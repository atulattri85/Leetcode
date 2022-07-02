vector<int> find(int arr[], int n , int x )
{
    int i=0;
    int j=n-1;
    int index=-1;;
    while(i<=j)
    {
        int mid=(i+j)/2;
        if(arr[mid]==x)
        {
            index=mid;
            break;
        }
        else if(arr[mid]>x)
        {
            j=mid-1;
        }
        else
        {
            i=mid+1;
        }
    }
    vector<int> ans;
    int min=index;
    int max=index;
    if(index==-1)
    {
        ans.push_back(-1);
        ans.push_back(-1);
        
    }
    else
    {
        while(min>0 && arr[min-1]==x)
        {
            min--;
        }
        while(max<n-1 && arr[max+1]==x)
        {
            max++;
        }
        ans.push_back(min);
        ans.push_back(max);
    }
    return ans;
}
