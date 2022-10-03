/*
https://leetcode.com/problems/merge-two-sorted-lists/
*/

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
      if(!list1) return list2;
      if(!list2) return list1;
      
      ListNode* ptr=list1;
      if(list1->val > list2->val){
        ptr=list2;
        list2=list2->next;
      }
      else{
        list1=list1->next;
      }
      ListNode* curr=ptr;
      while(list1 && list2){
        if(list1->val < list2->val){
          curr->next=list1;
          list1=list1->next;
        }
        else{
          curr->next=list2;
          list2=list2->next;
        }
        curr=curr->next;
      }
      while(list1){
        curr->next=list1;
        curr=curr->next;
        list1=list1->next;
      }
      while(list2){
        curr->next=list2;
        curr=curr->next;
        list2=list2->next;
      }
      return ptr;
    }
};