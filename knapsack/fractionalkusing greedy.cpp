
class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    static bool compare(Item a,Item b)
    {
        double qq=(double)a.value/(double)a.weight;
        double ww=(double)b.value/(double)b.weight;
        return qq>ww;
    }
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        double ans=0;
        sort(arr,arr+n,compare);
        int put=0;
        while(W>0 && put<n)
        {
            if(arr[put].weight<W)
            {
                W=W-arr[put].weight;
                ans=ans+arr[put].value;
                put++;
            }
            else
            {
                ans=ans+((double)((double)W/(double)arr[put].weight))*arr[put].value;
                W=0;
            }
        }
        return ans;
    }
        
};