class Solution
{
    public:
    
    vector<int> levelOrder(Node* node)
    {
        queue<Node *> q;
        vector<int> ans;
        q.push(node);
        while(q.size()!=0)
        {
            if(q.front()==NULL)
            {
                q.pop();
            }
            else
            {
                ans.push_back(q.front()->data);
                q.push(q.front()->left);
                q.push(q.front()->right);
                q.pop();
            }
        }
        return ans;
    }
};
