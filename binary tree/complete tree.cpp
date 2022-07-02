class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    void lvlorder(Node * root,vector<int>&v)
    {
        queue<Node *> q;
        q.push(root);
        while(q.size()!=0)
        {
            Node * frontt=q.front();
            q.pop();
            if(frontt==NULL)
            {
                v.push_back(-1);
            }
            else
            {
                v.push_back(frontt->data);
                if(frontt->left)
                {
                    q.push(frontt->left);
                }
                else
                {
                    q.push(NULL);
                }
                if(frontt->right)
                {
                    q.push(frontt->right);
                }
                else
                {
                    q.push(NULL);
                }
            }
        }
    }
    bool isBalanced(Node *root)
    {
        vector<int> v;
        lvlorder(root,v);
        int n=v.size();
        int i=0;
        while(v[i]!=-1)
        {
            i++;
        }
        int flag=1;
        for(i;i<n;i++)
        {
            if(v[i]!=-1)
            {
                flag=0;
            }
        }
        if(flag==0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};
