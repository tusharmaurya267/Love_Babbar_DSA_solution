/*
https://practice.geeksforgeeks.org/problems/min-distance-between-two-given-nodes-of-a-binary-tree/1
*/

class Solution{
    public:
    /* Should return minimum distance between a and b
    in a tree with given root*/
    Node* lca_solve(Node* root ,int n1 ,int n2){
        if(!root) return nullptr;
        if(root->data==n1 || root->data==n2) return root;
        Node* lh=lca_solve(root->left,n1,n2);
        Node* rh=lca_solve(root->right,n1,n2);
        if(lh&&rh) return root;
        if(lh) return lh;
        if(rh) return rh;
    }
    int count=0;
    int solve(Node* root , int val){
        if(!root) return 0;
        if(root->data == val) return 1;
        int l=solve(root->left,val);
        int r=solve(root->right,val);
        if(l==0 && r==0) return 0;
        return l+r+1;
        }
    int findDist(Node* root, int a, int b) {
        // Your code here
        Node* lca = lca_solve(root,a,b);
        a=solve(lca,a);
        b=solve(lca,b);
        return a+b-2;
    }
};