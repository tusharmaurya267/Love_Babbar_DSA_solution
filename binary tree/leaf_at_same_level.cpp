/*
https://practice.geeksforgeeks.org/problems/leaf-at-same-level/1
*/


/* The structure of the binary tree is as follows
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/

class Solution{
  public:
    /*You are required to complete this method*/
    
    // bool solve(Node *root ,int lvl , int initial){
    //     if(!root) return true;
    //     if(!root->left && !root->right){
            
    //         if(initial==-1) initial=lvl;
    //         else {
    //             if(initial!=lvl){
    //                 return false;
    //             }
    //         }
    //     }
    //     solve(root->left , lvl+1, initial);
    //     solve(root->right, lvl+1, initial);
        
    // }
    // bool check(Node *root)
    // {
    //     //Your code here
    //     bool ans=true;
    //     ans =solve(root , 0 , -1);
    //     return ans;
    // }
    
    void solve(Node *root ,int lvl , unordered_set<int> &s){
        if(!root) return;
        if(!root->left && !root->right){
            s.insert(lvl);
            }
        
        solve(root->left , lvl+1, s);
        solve(root->right, lvl+1, s);
        
    }
    bool check(Node *root)
    {
        //Your code here
        unordered_set<int>s;
        solve(root , 0 , s );
        if(s.size() == 1){
            return true;
        }
        else{
            return false;
        }
    }
};
