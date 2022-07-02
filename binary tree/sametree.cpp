class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q)
    {
        if(p==NULL && q==NULL)
        {
            return true;
        }
        else if(p==NULL && q!=NULL)
        {
            return false;
        }
        else if(p!=NULL && q==NULL)
        {
            return false;
        }
        else
        {
            if(p->val!=q->val)
            {
                return false;
            }
            else
            {
                bool a=isSameTree(p->left,q->left);
                bool b=isSameTree(p->right,q->right);
                return a&&b;
            }
        }
    }
};