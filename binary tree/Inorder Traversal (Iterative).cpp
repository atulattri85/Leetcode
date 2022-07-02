class Solution {
public:
    vector<int> inOrder(Node* root)
    {
        vector<int> v;
        stack<Node *> st;
        int flag=1; 
        while(root!=NULL || st.size()!=0)
        {
            if(root!=NULL)
            {
                if(root->left)
                {
                    st.push(root);
                    root=root->left;
                }
                else
                {
                    v.push_back(root->data);
                    root=root->right;
                }
            }
            else
            {
                v.push_back(st.top()->data);
                root=st.top();
                st.pop();
                root=root->right;
                
            }
        }
        return v;
    }
};