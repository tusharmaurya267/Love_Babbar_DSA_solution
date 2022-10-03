/*
https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/
*/

class Solution {
public:
    TreeNode* solve(TreeNode* root, TreeNode* p, TreeNode* q){
        if(!root) return nullptr;
        if(root->val < p->val && root->val < q->val){
            return solve(root->right,p,q);
        }
        if(root->val > p->val && root->val > q->val){
            return solve(root->left,p,q);
        }
        return root;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root) return nullptr;
        return solve(root,p,q);
    }
};