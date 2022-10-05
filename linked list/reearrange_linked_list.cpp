/*
https://practice.geeksforgeeks.org/problems/rearrange-linked-list-in-place/1
*/

Node *inPlace(Node *root)
{
 // your code goes here
    Node* fast=root;
    Node* slow=root;
    while(fast && fast->next){
        fast=fast->next;
        slow=slow->next;
        if(fast->next) fast=fast->next;
        else break;
    }
    Node* pre=nullptr;
    Node* curr=slow;
    Node* frd=slow;
    while(curr){
        frd=curr->next;
        curr->next=pre;
        pre=curr;
        curr=frd;
    }
      
    Node* temp=root;
    Node* ptr=root;
    Node* temp1=ptr;
      
    temp=temp->next;
    int flag=0;
    while(pre && temp){
        if(flag==0){
            temp1->next=pre;
            pre=pre->next;
            flag=1;
        }
        else{
            temp1->next=temp;
            temp=temp->next;
            flag=0;
        }
        temp1=temp1->next;
    }
    return ptr;
}