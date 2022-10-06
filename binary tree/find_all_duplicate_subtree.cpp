/*
https://practice.geeksforgeeks.org/problems/duplicate-subtrees/1
*/

string solve(Node* root, unordered_map<string, int> &map, vector<Node*> &res){
    
    if(!root) return "!";
    string ans;
    ans = to_string(root->data)+"$";
    ans = ans + solve(root->right, map, res)+"$";
    ans = ans + solve(root->left, map, res);
    
    map[ans]++;
    
    if(map[ans] == 2) res.push_back(root);
    
    return ans;
    
}

vector<Node*> printAllDups(Node* root){
    
    vector<Node*>res;
    
    unordered_map<string, int>map;
    
    solve(root, map, res);
    
    return res;
}