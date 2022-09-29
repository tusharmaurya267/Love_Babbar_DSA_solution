/*
https://leetcode.com/problems/maximum-depth-of-binary-tree/
https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1
*/


#include<bits/stdc++.h>
class Solution {
public:
    int maxDepth(TreeNode* root) {
      if(!root) return 0;

        int l=maxDepth(root->left);
        int r=maxDepth(root->right);
        return max(l,r)+1; 
    }
};