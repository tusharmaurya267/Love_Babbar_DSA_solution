/*
https://practice.geeksforgeeks.org/problems/check-for-balanced-tree/1
*/

class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    int solve(Node *root ){
        if(!root) return 0;
        int lh=solve(root->left);
        if(lh==-1) return -1;
        int rh=solve(root->right);
        if(rh==-1) return -1;
        if(abs(lh-rh)>1) return -1;
        else
            return 1+max(lh,rh);
        
    }
    bool isBalanced(Node *root)
    {
        //  Your Code here
        int a=solve( root);
        if(a==-1) return false;
        else return true;
    }
};

