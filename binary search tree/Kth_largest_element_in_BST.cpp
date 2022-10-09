/*
https://practice.geeksforgeeks.org/problems/kth-largest-element-in-bst/1
*/

class Solution
{
    public:
    void solve(Node* root, int k, priority_queue<int,vector<int>,greater<int>>&minh){
        if(!root) return;
        minh.push(root->data);
        if(minh.size() > k){
            minh.pop();
        }
        solve(root->left,k,minh);
        solve(root->right,k,minh);
    }
    int kthLargest(Node *root, int K)
    {
        //Your code here
        priority_queue<int,vector<int>,greater<int>>minh;
        solve(root, K, minh);
        return minh.top();
    }
};