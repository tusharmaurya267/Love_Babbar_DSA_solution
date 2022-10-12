/*
https://practice.geeksforgeeks.org/problems/populate-inorder-successor-for-all-nodes/1
*/

class Solution
{
public:
    vector<Node*>v;
    void inorder(Node* root){
        if(!root) return;
        inorder(root->left);
        v.push_back(root);
        inorder(root->right);
    }
    void attach(Node* root){
        for(int i=0;i<v.size()-1;i++){
            v[i]->next=v[i+1];
        }
    }
    void populateNext(Node *root)
    {
        if(!root) return;
        inorder(root);
        attach(root);
    }
};