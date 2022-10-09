/*
https://leetcode.com/problems/validate-binary-search-tree/description/
*/

class Solution {
public:
    bool ans= true;
    bool check(TreeNode* root, long min, long max){
        if(!root) return true;
        if(root->val <= min || root->val >= max){ ans=false; return false; }

        bool a=check(root->left,min,root->val);
        bool b=check(root->right,root->val,max);
        if(!a || !b){ ans=false; return false; }
        else return true;
        
    }
    bool isValidBST(TreeNode* root) {
        if(!root->left && !root->right) return true;
        check(root,LONG_MIN,LONG_MAX);
        return ans;
    }
};