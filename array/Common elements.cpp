
class solution{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            vector<int> ans;
            int i=0;
            int j=0;
            int k=0;
            while(i<n1 && j<n2 && k<n3)
            {
                if(A[i]==B[j] && B[j]==C[k])
                {
                    ans.push_back(A[i]);
                    i++;
                    j++;
                    k++;
                }
                else if(A[i]!=B[j] && B[j]!=C[k] && C[k]!=A[i])
                {
                    if(A[i]>B[j] && A[i]>C[k])
                    {
                        j++;
                        k++;
                    }
                    else if(B[j]>A[i] && B[j]>C[k])
                    {
                        i++;
                        k++;
                    }
                    else if(C[k]>A[i] && C[k]>B[j])
                    {
                        i++;
                        j++;
                    }
                }
                else if(A[i]==B[j])
                {
                    if(A[i]>C[k])
                    {
                        k++;
                    }
                    else
                    {
                        i++;
                        j++;
                    }
                }
                else if(A[i]==C[k])
                {
                    if(A[i]>B[j])
                    {
                        j++;
                    }
                    else
                    {
                        i++;
                        k++;
                    }
                }
                else if(B[j]==C[k])
                {
                    if(B[j]>A[i])
                    {
                        i++;
                    }
                    else
                    {
                        j++;
                        k++;
                    }
                }
            }
            vector<int> ans2;
            int size=ans.size();
            if(size==0 || size==1)
            {
                return ans;
            }
            else
            {
                for(int p=0;p<size-1;p++)
                {
                    if(ans[p]!=ans[p+1])
                    {
                        ans2.push_back(ans[p]);
                    }
                }
                ans2.push_back(ans[size-1]);
                return ans2;
            
            }
            
        }

};
