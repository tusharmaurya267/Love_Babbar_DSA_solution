/*
https://leetcode.com/problems/remove-nth-node-from-end-of-list/
*/

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* frd=head;
        ListNode* pre=head;
        
        while(n!=0 ){
          frd=frd->next;
          n--;
        }
      if(!frd)return head->next; 
        while(frd->next!=nullptr){
          pre=pre->next;
          frd=frd->next;
        }
      pre->next=pre->next->next;
      return head;
    }
};