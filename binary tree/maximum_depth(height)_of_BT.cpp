/*
https://leetcode.com/problems/maximum-depth-of-binary-tree/submissions/
https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
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