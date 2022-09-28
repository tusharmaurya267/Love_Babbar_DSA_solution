/*
https://practice.geeksforgeeks.org/problems/binary-tree-to-dll/1
*/

class Solution
{
    public: 
    void solve(Node *root , int &flag , Node* &head , Node* &pre){
        if(!root) return;
        solve(root->left , flag ,head , pre);
        if(flag==0){
            head=root;
            pre=root;
            flag=1;
        }
        else{
            root->left=pre;
            pre->right=root;
            pre=root;
        }
        solve(root->right , flag , head ,pre);
    }
    
    Node * bToDLL(Node *root)
    {
        if(!root) return nullptr;
        Node* head=nullptr;
        Node* pre=nullptr;
        int flag=0;
        solve(root , flag , head , pre);
        return head;
        // your code here
    }
};


