/*
https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal/
*/

class Solution {
public:
    int i=0;
    TreeNode* solve(vector<int>& pre, int lb, int ub){
        if(pre.size()==i || pre[i]>ub || pre[i]<lb)return nullptr;
        TreeNode* root=new TreeNode(pre[i++]);
        root->left=solve(pre,lb,root->val);
        root->right=solve(pre,root->val,ub);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder){
        return solve(preorder , INT_MIN , INT_MAX);
    }
};