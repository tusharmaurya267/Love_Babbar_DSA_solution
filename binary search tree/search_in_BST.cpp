/*
https://leetcode.com/problems/search-in-a-binary-search-tree/
*/

class Solution {
public:
    
    TreeNode* searchBST(TreeNode* root, int val) {
        if(!root) return nullptr;
        while(root){
            if(root->val==val) return root;
            if(root->val>val) root=root->left;
            else root=root->right;
        }
        return nullptr;
    }
};