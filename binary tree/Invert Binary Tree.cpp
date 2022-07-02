class Solution {
public:
    TreeNode* invertTree(TreeNode* root) 
    {
        if(root==NULL)
        {
            return root;
        }
        else
        {
            TreeNode *lefty;
            TreeNode *righty;
            lefty=invertTree(root->left);
            righty=invertTree(root->right);
            root->left=righty;
            root->right=lefty;
            return root;
        }
    }
};