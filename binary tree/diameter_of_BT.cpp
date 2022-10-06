/*
https://practice.geeksforgeeks.org/problems/diameter-of-binary-tree/1
*/

class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    int check(Node* root ,int &maxi){
        if(!root) return 0;
        int l=check(root->left,maxi);
        int r=check(root->right,maxi); 
        maxi=max(maxi,l+r+1);
        
        return 1+max(l,r);
    }
    int diameter(Node* root) {
        // Your code here
        int maxi=0;
        check(root,maxi);
        return maxi;
    }
};