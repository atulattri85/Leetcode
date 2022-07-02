vector<int> reverseLevelOrder(Node *root)
{
    vector<int> ans;
    queue<Node *> q;
    q.push(root);
    int size=0;
    while(q.size()!=0)
    {
        if(q.front()==NULL)
        {
            q.pop();
        }
        else
        {
            size++;
            ans.push_back(q.front()->data);
            q.push(q.front()->right);
            q.push(q.front()->left);
            q.pop();
        }
    }
    vector<int> fans;
    for(int i=size-1;i>=0;i--)
    {
        fans.push_back(ans[i]);
    }
    return fans;
}