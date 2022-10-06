/*
https://practice.geeksforgeeks.org/problems/serialize-and-deserialize-a-binary-tree/1
*/

class Solution
{
    public:
    //Function to serialize a tree and return a list containing nodes of tree.
    vector<int> serialize(Node *root) 
    {
        //Your code here
        if(!root) return {};
        vector<int>v;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            Node* k=q.front();
            q.pop();
            if(!k) v.push_back(-1);
            else{
                v.push_back(k->data);
                q.push(k->left);
                q.push(k->right);
            }
        }
        return v;
    }
    
    //Function to deserialize a list and construct the tree.
    Node * deSerialize(vector<int> &A)
    {
        Node* root=new Node(A[0]);
        queue<Node*>q;
        q.push(root);
        int i=1;
        while(!q.empty()){
            auto k=q.front();
            q.pop();
            int l=A[i];
            int r=A[i+1];
            if(l!=-1){
                k->left=new Node(l);
                q.push(k->left);
            }
            if(r!=-1){
                k->right=new Node(r);
                q.push(k->right);
            }
            i=i+2;
        }
        return root;
    }

};