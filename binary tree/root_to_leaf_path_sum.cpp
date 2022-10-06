/*
https://practice.geeksforgeeks.org/problems/root-to-leaf-path-sum/1
*/

class Solution
{
    public:
    bool ans=false;
    int check(Node* root, int S){
        if(!root) return 0;
        if(!root->left && !root->right && S==root->data) ans=true;
        int sum=S-root->data;
        check(root->left,sum);
        check(root->right,sum);

    }
    
    bool hasPathSum(Node *root, int S) {
    // Your code here
    if(!root || S<0) return false;
    
    check(root, S);
    return ans;
    }
};
