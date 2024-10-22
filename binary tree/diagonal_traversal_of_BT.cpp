/*
https://practice.geeksforgeeks.org/problems/diagonal-traversal-of-binary-tree/1
*/

vector<int> diagonal(Node *root)
{
   // your code here
   queue<Node*>q;
   vector<int>ans;
   if(!root) return ans;
   q.push(root);
   while(!q.empty()){
       Node* temp=q.front();
       q.pop();
       while(temp){
           if(temp->left) q.push(temp->left);
           ans.push_back(temp->data);
           temp=temp->right;
       }
   }
   return ans;
}