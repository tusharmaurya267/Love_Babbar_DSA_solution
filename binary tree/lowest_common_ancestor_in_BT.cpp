/*
https://practice.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-binary-tree/1
*/

class Solution
{
    public:
    //Function to return the lowest common ancestor in a Binary Tree.
    
    Node* solve(Node* root ,int n1 ,int n2){
        if(!root) return nullptr;
        if(root->data==n1 || root->data==n2) return root;
        Node* lh=solve(root->left,n1,n2);
        Node* rh=solve(root->right,n1,n2);
        if(lh&&rh) return root;
        if(lh) return lh;
        if(rh) return rh;
    }
    
    Node* lca(Node* root ,int n1 ,int n2 )
    {
       //Your code here 
       if(!root) return nullptr;
       return solve(root,n1,n2);
    }
};