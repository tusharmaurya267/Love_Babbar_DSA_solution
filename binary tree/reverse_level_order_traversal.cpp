/*
https://practice.geeksforgeeks.org/problems/reverse-level-order-traversal/1
*/


/*   
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
vector<int> reverseLevelOrder(Node *root)
{
    if(!root) return{};
    vector<int>ans;
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node *k=q.front();
        q.pop();
        if(k->right) q.push(k->right);
        if(k->left) q.push(k->left);
        ans.push_back(k->data);
    }
    reverse(ans.begin(),ans.end());
    return ans;
}