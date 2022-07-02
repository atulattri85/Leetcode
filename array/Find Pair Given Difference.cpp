bool findPair(int arr[], int size, int n)
{
    int i=0;
    int j=1;
    sort(arr,arr+size);
    while(i<size && j<size)
    {
        if(arr[j]-arr[i]==n)
        {
            if(i!=j)
            {
                return true;
            }
            else{
                j++;
            }
        }
        else
        {
            if(arr[j]-arr[i]<n)
            {
                j++;
            }
            else
            {
                i++;
            }
        }
    }
    return false;
    
}