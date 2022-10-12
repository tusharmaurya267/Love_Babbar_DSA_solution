/*
https://practice.geeksforgeeks.org/problems/replace-every-element-with-the-least-greater-element-on-its-right/1
*/

class Solution{
    public:
    
    Node* insert(Node* root, int data, int succ){
        if(!root) return new Node(data);
        if(data<root->data){
            succ=node->data;
            root->left=insert(root->left,data,succ);
        }
        if(data>root->data) root->right=insert(root->right,data,succ);
        return root;
    }
    vector<int> findLeastGreater(vector<int>& arr, int n) {
        Node* root=nullptr;
        for(int i=n-1;i>=0;i--){
            int succ=-1;
            root=insert(root,arr[i],succ);
            arr[i]=succ;
        }
    }
};