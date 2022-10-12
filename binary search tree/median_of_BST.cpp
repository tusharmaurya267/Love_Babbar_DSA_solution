/*
https://practice.geeksforgeeks.org/problems/median-of-bst/1
*/

void inorder(Node* root, vector<int>&ans){
    if(!root) return;
    inorder(root->left,ans);
    ans.push_back(root->data);
    inorder(root->right,ans);
}

float findMedian(struct Node *root)
{
      //Code here
    vector<int>ans;
    inorder(root,ans);
    int n=ans.size();
    int mid=n/2;
    if(n%2!=0){
        return ans[mid];
    }
    else{
        return (float)(ans[mid]+ans[mid-1])/2;
    }
}

// int c=0;
// int flag=0;
// void count(Node* root){
//     if(!root) return;
//     c++;
//     count(root->left);
//     count(root->right);
// }

// float solve(Node* root, int c, int k, bool &odd, int i, Node* &pre){
//     if(!root) return 0;
//     solve(root->left,c,k,odd,i,pre);
    
//     if(i==k && flag==0){
//         if(odd)return(float)(pre->data);
//         return(float)((root->data + pre->data)/2);
//         flag=1;
//     }
//     pre=root;
//     solve(root->left,c,k,odd,i,pre);
// }

// float findMedian(struct Node *root){
    
//     count(root);
//     bool odd=true;
//     if(c%2==0) odd=false;
//     Node* pre=nullptr;
//     return solve(root , c , c/2 ,odd,0,pre);
// }