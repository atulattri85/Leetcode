# include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next, *prev;
};
 

void pairSum(struct Node *head, int x)
{
    Node *p=head;
    Node *q=head;
    while(p!=NULL && q!=NULL)
    {
        if(p->next==q && p->data + q->data==x)
        {
            cout<<p->data<<" "<<q->data<<endl;
            break;    
        }
        else if(p->data + q->data==x)
        {
            cout<<p->data<<" "<<q->data<<endl;
            p=p->next;
        }
        else if(p->data + q->data<x)
        {
            q=q->next;
        }
        else{
            q=q->prev;
        }
    }
}
 
void insert(struct Node **head, int data)
{
    struct Node *temp = new Node;
    temp->data = data;
    temp->next = temp->prev = NULL;
    if (!(*head))
        (*head) = temp;
    else
    {
        temp->next = *head;
        (*head)->prev = temp;
        (*head) = temp;
    }
}
 
int main()
{
    struct Node *head = NULL;
    insert(&head, 7);
    insert(&head, 6);
    insert(&head, 5);
    insert(&head, 4);
    insert(&head, 3);
    insert(&head, 2);
    insert(&head, 1);
    int x = 7;
 
    pairSum(head, x);
 
    return 0;
}
