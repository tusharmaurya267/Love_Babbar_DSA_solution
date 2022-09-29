/*
https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1
*/


// vector<int> leftView(Node *root)
// {
//   // Your code here
//   if(!root) return {};
//   vector<int>ans;
//   queue<Node*>q;
//   q.push(root);
//   while(!q.empty()){
//       Node* start=q.front();
//       ans.push_back(start->data);
//       int size=q.size();
//       while(size--){
//           Node *temp=q.front();
//           q.pop();
//           if(temp->left) q.push(temp->left);
//           if(temp->right) q.push(temp->right);
//       }
//   }
//   return ans;
// }

void solve(Node *root , vector<int>&ans , int lvl ){
    if(!root) return;
    if(ans.size()==lvl) ans.push_back(root->data);
    solve(root->left,ans,lvl+1);
    solve(root->right,ans,lvl+1);
}

vector<int> leftView(Node *root){
    vector<int>ans;
    solve(root,ans,0);
    return ans;
}

