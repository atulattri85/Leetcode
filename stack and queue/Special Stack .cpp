# include<bits/stdc++.h>
int min=INT_MAX;
void push(stack<int>& s, int a)
{
	s.push(a);
}

bool isFull(stack<int>& s,int n)
{
	if(s.size()==n)
	{
	    return true;
	}
	else
	{
	    return false;
	}
}

bool isEmpty(stack<int>& s)
{
	if(s.size()==0)
	{
	    return true;
	}
	else
	{
	    return false;
	}
}

int pop(stack<int>& s)
{
    int t=s.top();
	s.pop();
	return t;
}

int getMin(stack<int>& s)
{
    int min=INT_MAX;
    while(s.size()!=0)
    {
        if(min>s.top())
        {
            min=s.top();
            s.pop();
        }
        else
        {
            s.pop();
        }
    }
	return min;
}