/*
https://leetcode.com/problems/invert-binary-tree/submissions/
*/

// class Solution {
// public:
//     TreeNode* invertTree(TreeNode* root) {
      
//       if(!root) return nullptr;
//       TreeNode *l=root->left;
//       TreeNode *r=root->right;
//       root->right=l;
//       root->left=r;
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