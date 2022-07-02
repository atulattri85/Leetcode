class Solution {
public:

    void leafnode(Node * root,vector<int> &v)
    {
        if(root==NULL)
        {
            
        }
        else if(root->left==NULL && root->right==NULL)
        {
            v.push_back(root->data);
        }
        else
        {
            leafnode(root->left,v);
            leafnode(root->right,v);
        }
        
    }
    void rightb(Node *b,vector<int> &v)
    {
        if(b->left==NULL && b->right==NULL)
        {
            
        }
        else if(b->right)
        {
            rightb(b->right,v);
            v.push_back(b->data);
        }
        else
        {
            rightb(b->left,v);
            v.push_back(b->data);
        }
    }
    void leftb(Node*a,vector<int> &v)
    {
        if(a->left==NULL && a->right==NULL)
        {
            
        }
        else if(a->left)
        {
            v.push_back(a->data);
            leftb(a->left,v);
        }
        else
        {
            v.push_back(a->data);
            leftb(a->right,v);
        }
    }
    vector <int> boundary(Node *root)
    {
         vector<int> v;
        if(root->left==NULL && root->right==NULL)
        {
            v.push_back(root->data);
            return v;
        }
        else
        {
           
            Node *b=root;
            Node * a=root;
            if(a->left)
            {
                leftb(a,v);
            }
            else
            {
                v.push_back(a->data);
            }
            
            leafnode(root,v);
            if(a->right)
            {
                rightb(b,v);
            }
            else
            {
                v.push_back(b->data);
            }
            
            v.pop_back();
            return v;
        }
        
    }
};
