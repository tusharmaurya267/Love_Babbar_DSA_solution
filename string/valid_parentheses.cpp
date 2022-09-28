/*
https://leetcode.com/problems/valid-parentheses/
*/

class Solution {
public:
    bool isValid(string s) {
      
      int n=s.length();
      if(n%2!=0) return false;
      stack<char>sa;
      for(int i=0;i<n;i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
          sa.push(s[i]);
          continue;
        }
        if(s[i]==')'){
          if(!sa.empty() && sa.top()=='(') sa.pop();
          else return false;
        }
        if(s[i]=='}'){
          if(!sa.empty() && sa.top()=='{') sa.pop();
          else return false;
        }
        if(s[i]==']'){
          if(!sa.empty() && sa.top()=='[') sa.pop();
          else return false;
        }
      }
      if(!sa.empty()) return false;
      return true;
    }
};