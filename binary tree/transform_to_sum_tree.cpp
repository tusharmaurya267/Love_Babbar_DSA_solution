/*
https://practice.geeksforgeeks.org/problems/transform-to-sum-tree/1
*/

class Solution {
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    int solve(Node* root){
        if(!root) return 0;
        
        int l=solve(root->left);
        int r=solve(root->right);
        int temp=root->data;
        root->data=l+r;
        return root->data+temp;
    }
    void toSumTree(Node *node)
    {
        // Your code here
        if(!node) return;
        solve(node);
    }
};