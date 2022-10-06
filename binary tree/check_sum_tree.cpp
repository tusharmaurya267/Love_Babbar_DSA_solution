/*
https://practice.geeksforgeeks.org/problems/sum-tree/1
*/

class Solution
{
    public:
    int check(Node* root , int &flag){
        if(!root) return 0;
        if(!root->left && !root->right) return root->data;
        if(flag==0) return 0;
        
        int l=check(root->left,flag);
        int r=check(root->right,flag);
        if(root->data != l+r) flag=0;
        return root->data+l+r;
    }
    bool isSumTree(Node* root)
    {
         // Your code here
         if(!root) return 1;
         if(!root->left && !root->right) return root->data;
         int flag=1;
         int ans=check(root,flag);
         return flag;
    }
};