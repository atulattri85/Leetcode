class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       vector<int> v;
       queue<Node *> q;
       if(root==NULL)
       {
           return v;
       }
       else
       {
           q.push(root);
           q.push(NULL);
           v.push_back(root->data);
           while(q.size()!=0)
           {
               Node *frontt=q.front();
               q.pop();
               if(frontt!=NULL)
               {
                   if(frontt->right)
                   {
                       q.push(frontt->right);
                   }
                   if(frontt->left)
                   {
                       q.push(frontt->left);
                   }
               }
               else
               {
                   if(q.size()!=0)
                   {
                       q.push(NULL);
                       v.push_back(q.front()->data);
                   }
                   else
                   {
                       
                   }
               }
           }
           return v;
       }
    }
};
