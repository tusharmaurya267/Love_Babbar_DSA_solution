/*
https://leetcode.com/problems/maximum-binary-tree/description/
*/

class Solution {
public:
    TreeNode* func(vector<int> &v,int left,int right){
        if(left>right) return NULL;
        int maxp=left;
        for(int i=left;i<=right;i++){
            if(v[maxp]<v[i]) maxp=i;
        }
        TreeNode* node= new TreeNode(v[maxp]);
        node->left=func(v,left,maxp-1);
        node->right=func(v,maxp+1,right);
        return node;
    }
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        TreeNode* ans = func(nums,0,nums.size()-1);
        return ans;
    }
};