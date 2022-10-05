/*
https://practice.geeksforgeeks.org/problems/check-for-balanced-tree/1
*/

// class Solution {
// public:
//     bool ans=true;
//     int check(TreeNode* root){
//         if(!root) return 0;
//         int l=check(root->left);
//         int r=check(root->right);
//         if(abs(l-r)>1) { ans=false; }
//         return max(l,r)+1;
//     }
//     bool isBalanced(TreeNode* root) {
//         if(!root) return true;
//         check(root);
//         return ans;
//     }
// };


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

