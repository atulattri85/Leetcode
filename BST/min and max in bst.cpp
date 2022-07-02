int minValue(struct Node *root) 
{
    struct Node *p=root;
    int min=-1;
    while(p!=NULL)
    {
        min=p->data;
        p=p->left;
    }
    return min;
}
