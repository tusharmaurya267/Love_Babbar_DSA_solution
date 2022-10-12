/*
https://practice.geeksforgeeks.org/problems/brothers-from-different-root/1
*/

class Solution
{
public:
    int c=0;
    void fetch(Node* root , int k , bool& final){
        if(!root) return;
        if(root->data == k){ final=true; return; }
        if(final==true) return;
        if(root->data>k) fetch(root->left , k, final);
        if(root->data<k) fetch(root->right , k, final);
        
    }
    
    void solve(Node* root1, Node* root2, int x){
        if(!root1) return;
        solve(root1->left,root2,x);
        bool ans=false;
        fetch(root2, x-root1->data ,ans);
        if(ans==true)c++;
        solve(root1->right,root2,x);
    }
    
    int countPairs(Node* root1, Node* root2, int x)
    {
        solve(root1,root2,x);
        return c;
    }
};