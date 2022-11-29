#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};

void Display(Node* root){
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node* t=q.front();
        q.pop();
        cout << t->data << " --> ";
        if(t->left) q.push(t->left);
        if(t->right) q.push(t->right);
    }
}
int main(){
    queue<Node*>q;
    int x;
    cin >> x;
    Node* root=new Node(x);
    q.push(root);
    while(x!=-1){

        Node* t=q.front();
        q.pop();
        cin >> x;
        if(x==1) break;
        if(x!=-1){
            Node *t1=new Node(x);
            t->left=t1;
            q.push(t1);
        }
        cin >> x;
        if(x==1) break;
        if(x!=-1){
            Node *t2=new Node(x);
            t->right=t2;
            q.push(t2);
        } 
    }

    Display(root);
}