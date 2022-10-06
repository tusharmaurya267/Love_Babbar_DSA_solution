/*
https://practice.geeksforgeeks.org/problems/construct-tree-1/1
*/

// class Solution{
//     public:
    
//     unordered_map<int,int>m;
//     int idx=0;
    
//     Node* solve(int in[],int pre[], int si , int ei){
//         if(si>ei) return nullptr;
//         Node* temp=new Node(pre[idx++]);
        
//         if(si == ei) return temp;
//         int mid=m[temp->data];
//         temp->left=solve(in , pre , si , mid-1);
//         temp->right=solve(in , pre , mid+1 , ei);
//         return temp;
//     }
    
//     Node* buildTree(int in[],int pre[], int n)
//     {
//         // Code here

//         for(int i=0;i<n;i++) m[in[i]]=i;
//         Node* root=solve(in , pre , 0 , n-1);
//         return root;
//     }
// };

class Solution {
public:
    unordered_map<int,int>m;
    TreeNode* solve(vector<int>&pre,vector<int>&in,int instart,int inend,int prestart,int preend){
        if(instart>inend || prestart>preend) return nullptr;
        TreeNode* root=new TreeNode(pre[prestart]);
        int inroot=m[root->val];
        int numsleft=inroot-instart;
        root->left=solve(pre,in,instart,inroot-1,prestart+1,prestart+numsleft);
        root->right=solve(pre,in,inroot+1,inend,prestart+numsleft+1,preend);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {  //← ← ← main function
       
        for(int i=0;i<inorder.size();i++){
            m[inorder[i]]=i;
        }
        TreeNode*root=NULL;
        root= solve(preorder,inorder,0,inorder.size()-1,0,preorder.size()-1);
        return root;
    }
};