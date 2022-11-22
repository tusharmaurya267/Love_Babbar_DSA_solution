#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

// Node* newNode(int x){
//     Node* t;
//     t->data=x;
//     t->next=NULL;
//     return t;
// }


Node *create(int *arr, int n){
    Node* root=NULL;
    Node* tail=NULL;
    for(int i=0;i<n;i++){
        // Node* t=newNode(arr[i]);
        Node* t=new Node;
        t->data=arr[i];
        t->next=NULL;
        if(i==0){
            root=t;
            tail=t;
        }
        else{
            tail->next=t;
            tail=tail->next;
        }
    }
    return root;
}

void print(Node* root){
    Node* curr=root;
    while(root){
        cout << curr->data << endl;
        curr=curr->next;
    }
}

int main(){
    int arr[]={1,2,3,4,5,6};
    int n=6;
    Node* root=create(arr,n);
    print(root);

    return 0;
}