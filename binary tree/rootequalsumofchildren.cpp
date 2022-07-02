class Solution {
public:
    bool checkTree(TreeNode* root) 
    {
        bool a;
        if(root->val==root->left->val+root->right->val)
        {
            a=true;
        }
        else
        {
            a=false;
        }
        return a;
    }
};