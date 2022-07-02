class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    bool static compare(pair<int,int> &a,pair<int,int>&b)
    {
        return a.second<b.second;
        
    }
    int maxMeetings(int start[], int end[], int n)
    {
        pair<int,int> A[n];
        for(int i=0;i<n;i++)
        {
            A[i].first=start[i];
            A[i].second=end[i];
        }
        sort(A,A+n,compare);
        int count=1;
        int fin=A[0].second;
        for(int i=1;i<n;i++)
        {
            if(A[i].first>fin)
            {
                count++;
                fin=A[i].second;
            }
        }
        return count;
    }
};