/*
https://practice.geeksforgeeks.org/problems/right-view-of-binary-tree/1
*/


// class Solution
// {
//     public:
//     //Function to return list containing elements of right view of binary tree.
//     vector<int> rightView(Node *root)
//     {
//         if(!root) return {};
//         vector<int>ans;
//         queue<Node*>q;
//         q.push(root);
//         while(!q.empty()){
//             Node* start=q.front();
//             ans.push_back(start->data);
//             int size=q.size();
//             while(size--){
//               Node *temp=q.front();
//               q.pop();
//               if(temp->right) q.push(temp->right);
//               if(temp->left) q.push(temp->left);
//             }
//         }
//         return ans;
//     }

// };


class Solution
{
    public:

    void solve(Node* root ,vector<int>&ans, int lvl){
    if(!root)return;
    if(lvl==ans.size()) ans.push_back(root->data);
    solve(root->right,ans,lvl+1);
    solve(root->left,ans,lvl+1);
    
    }
    vector<int> rightView(Node *root)
    {
      // Your code here
      vector<int>ans;
      solve(root,ans,0);
      return ans;
    }
};

