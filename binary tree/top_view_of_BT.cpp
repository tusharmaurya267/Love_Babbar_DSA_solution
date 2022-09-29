/*
https://practice.geeksforgeeks.org/problems/top-view-of-binary-tree/1
*/

class Solution
{
    public:
    vector<int> topView(Node *root)
    {
        //Your code here
        vector<int>ans;
        map<int,int>mp;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            auto p=q.front();
            q.pop();
            Node* temp=p.first;
            int lvl=p.second;
            if(mp.find(lvl)==mp.end()){
                mp[lvl]=temp->data;
            }
            if(temp->left) q.push({temp->left,lvl-1});
            if(temp->right) q.push({temp->right,lvl+1});
        }
        for(auto i:mp){
            ans.push_back(i.second);
        }
        return ans;
    }

};

