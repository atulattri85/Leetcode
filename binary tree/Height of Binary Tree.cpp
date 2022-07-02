int max(int a,int b)
{
    if(a>b)
    {
        return a;
        
    }
    else
    {
        return b;
    }
}
int height(struct Node* node)
{
    if(node==NULL)
    {
        return 0;
    }
    else
    {
        return 1+max(height(node->left),height(node->right));
    }
}