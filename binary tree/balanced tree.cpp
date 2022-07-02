class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    int height(Node * root)
    {
        if(root==NULL)
        {
            return 0;
        }
        else
        {
            return 1+max(height(root->left),height(root->right));
        }
    }
    bool isBalanced(Node *root)
    {
        if(root==NULL)
        {
            return true;
        }
        int x=height(root->left);
        int y=height(root->right);
        if(x-y==1 || x==y || y-x==1)
        {
            if(isBalanced(root->left) && isBalanced(root->right))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
};
