/*
https://leetcode.com/problems/maximum-width-of-binary-tree/
*/

class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        int max_width=0;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            int maxi=q.back().second;
            int mini=q.front().second;
            max_width=max(max_width,maxi-mini+1);
            int size=q.size();
            while(size!=0){
                auto p=q.front();
                TreeNode* t=p.first;
                long lvl=p.second;
                q.pop();
                if(t->left) q.push({t->left,2*lvl+1}); 
                if(t->right) q.push({t->right,2*lvl+2});
                size--;
            }     
        }
        return max_width;
    }
};