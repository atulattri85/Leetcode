class Solution{
    public:
    vector<int> preOrder(Node* root)
    {
        vector<int> v;
        stack<Node *> st;
        while(root!=NULL || st.size()!=0)
        {
            if(root!=NULL)
            {
                if(root->left)
                {
                    v.push_back(root->data);
                    st.push(root);
                    root=root->left;
                }
                else if(root->right)
                {
                    v.push_back(root->data);
                    root=root->right;
                }
                 else
                {
                    if(root!=NULL)
                    {
                        v.push_back(root->data);
                    }
                    if(st.size()!=0)
                    {
                        root=st.top();
                        st.pop();
                        root=root->right;
                    }
                    else
                    {
                        break;
                    }
                    
                }
            }
            else
            {
                 if(st.size()!=0)
                    {
                        root=st.top();
                        st.pop();
                        root=root->right;
                    }
                    else
                    {
                        break;
                    }
            }
            
           
        }
        return v;
    }
};