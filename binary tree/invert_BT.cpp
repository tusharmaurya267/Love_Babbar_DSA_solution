/*
https://leetcode.com/problems/invert-binary-tree/submissions/
*/

// class Solution {
// public:
//     TreeNode* invertTree(TreeNode* root) {
      
//       if(!root) return nullptr;
//       TreeNode *left=root->left;
//       TreeNode *right=root->right;
//       root->right=left;
//       root->left=right;
//       invertTree(root->left);
//       invertTree(root->right);
       
//       return root;
//     }
// };

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
      
      if(!root) return nullptr;
      swap(root->left,root->right);
      invertTree(root->left);
      invertTree(root->right);
       
      return root;
    }
};