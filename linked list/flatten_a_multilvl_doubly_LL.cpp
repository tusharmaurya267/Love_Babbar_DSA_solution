/*
https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list/
*/

class Solution {
public:
    Node* flatten(Node* head) {
        if(!head) return nullptr;
        stack<Node*>s;
        s.push(head);
        Node* temp=nullptr;
        vector<int>ans;
        while(!s.empty())
        {
            Node* root=s.top();
            s.pop();
            while(root){
                ans.push_back(root->val);
                if(root->child){ s.push(root->next); root=root->child; continue; }
                root=root->next;
            }
            
        }
        int flag=0;
        for(int i=0;i<ans.size();i++){
            Node* t=new Node(ans[i]);
            if(flag==0){
                head=t;
                temp=t;
                flag=1;
            }
            else{
                temp->next=t;
                t->prev=temp;
                temp=temp->next;
            }
            
        }
        return head;
    }
    
};