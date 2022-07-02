vector<int> leftView(Node *root)
{
   vector<int> v;
   queue<Node*> q;
  if(root==NULL)
  {
      return v;
  }
   
       q.push(root);
       v.push_back(root->data);
       q.push(NULL);
       while(q.size()!=0)
       {
           Node *frontt=q.front();
           q.pop();
           if(frontt==NULL)
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
           else
           {
               if(frontt->left)
               {
                   q.push(frontt->left);
               }
               if(frontt->right)
               {
                   q.push(frontt->right);
               }
           }
       }
   
   return v;
}
