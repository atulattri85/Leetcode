class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	int flag=0;
    	vector<int> v;
    	vector<int>helper;
    	queue<Node *> q;
    	q.push(root);
    	q.push(NULL);
    	while(q.size()!=0)
    	{
    	    if(flag==0)
    	    {
    	        Node * frontt=q.front();
    	        q.pop();
    	        if(frontt==NULL)
    	        {
    	            if(q.size()==0)
    	            {   
    	                return v;
    	            }
    	            else
    	            {
    	                q.push(NULL);
    	                flag=1;
    	            }
    	            
    	        }
    	        else
    	        {
    	            v.push_back(frontt->data);
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
    	    else if(flag==1)
    	    {
    	        Node * frontt=q.front();
    	         q.pop();
    	        if(frontt==NULL)
    	        {
    	            int sizee=helper.size();
    	            for(int i=sizee-1;i>=0;i--)
    	            {
    	                v.push_back(helper[i]);
    	                helper.pop_back();
    	            }
    	            if(q.size()==0)
    	            {
    	                return v;
    	                
    	            }
    	            else
    	            {
    	                 q.push(NULL);
    	                 flag=0;
    	            }
    	           
    	        }
    	        else
    	        {
    	             helper.push_back(frontt->data);
        	       
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
    	    
    	}
    	return v;
    }
};
