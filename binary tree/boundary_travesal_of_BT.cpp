class Solution {
public:
    bool isleaf(Node *root){
        if(!root->left && !root->right) return true;
        else return false;
    }
    void addleft(Node *root, vector<int>&v){
        Node *curr=root;
        while(curr){
            if(!isleaf(curr)) v.push_back(curr->data);
            if(curr->left) curr=curr->left;
            else curr=curr->right;
        }
        // for(int i=0;i<v.size();i++){
        //     cout <<v[i] << " ";
        // }
    }
    void addright(Node *root , vector<int>&v ){
        Node *curr=root;
        vector<int>temp;
        while(curr){
            if(!isleaf(curr)) temp.push_back(curr->data);
            if(curr->right) curr=curr->right;
            else curr=curr->left;
        }
        for(int i=temp.size()-1;i>=0;--i){
            v.push_back(temp[i]);
        }
        
    }
    void addleaf(Node *root , vector<int>&v ){
        
        if(!root) return;
        if(isleaf(root)) { v.push_back(root->data); return; }
        addleaf(root->left , v);
        addleaf(root->right , v);
        
    }
    
    vector <int> boundary(Node *root)
    {
        //Your code here
        vector<int>v;
        if(!root) return v;
        if(!isleaf(root)) v.push_back(root->data);
        addleft(root->left,v);
        addleaf(root,v);
        addright(root->right,v);
        return v;
    }
};