/*
https://practice.geeksforgeeks.org/problems/multiply-two-linked-lists/1
*/

long long  multiplyTwoLists (Node* l1, Node* l2)
{
    
  //Your code here
  
  long long a = 0, b = 0;
  long long m = 1000000007;
  
  while(l1){
      a = (a*10)%m + l1->data;
      l1 = l1->next;
  }
  while(l2){
      b = (b*10)%m + l2->data;
      l2 = l2->next;
  }
  long long ans = a*b;
  return ans%m;
}