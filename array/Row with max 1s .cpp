class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m)
	{
	    int maxindex=-1;
	    int i=0;
	    int j=m-1;
	    while(i<n && j>=0)
	    {
	        if(arr[i][j]==1)
	        {
	            j--;
	            maxindex=i;
	        }
	        else
	        {
	            i++;
	        }
	    }
	    return maxindex;
	}

};