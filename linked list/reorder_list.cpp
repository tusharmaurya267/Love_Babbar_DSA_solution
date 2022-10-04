/*
https://leetcode.com/problems/reorder-list/
*/

class Solution {
public:
    void reorderList(ListNode* head) {
      ListNode* fast=head;
      ListNode* slow=head;
      while(fast && fast->next){
        fast=fast->next;
        slow=slow->next;
        if(fast->next) fast=fast->next;
        else break;
        
      }
      ListNode* pre=nullptr;
      ListNode* curr=slow;
      ListNode* frd=slow;
      while(curr){
        frd=curr->next;
        curr->next=pre;
        pre=curr;
        curr=frd;
      }
      
      ListNode* temp=head;
      ListNode* ptr=head;
      ListNode* temp1=ptr;
      
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
      
      head=ptr;
    }
};
