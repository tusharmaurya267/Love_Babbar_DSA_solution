/*
https://leetcode.com/problems/letter-case-permutation/submissions/
*/

class Solution {
public:
    void solve(vector<string>&ans, string op, string s){
        if(s.size()==0){
            ans.push_back(op);
            return;
        }
        if(!isalpha(s[0])){
            string op1=op+s[0];
            s.erase(s.begin()+0);
            solve(ans,op1,s);
            return;
        }
        char ch1=tolower(s[0]);
        char ch2=toupper(s[0]);
        string op1=op+ch1;
        string op2=op+ch2;
        s.erase(s.begin()+0);
        solve(ans,op1,s);
        solve(ans,op2,s);
        return;
    }
    vector<string> letterCasePermutation(string s) {
        vector<string>ans;
        string op="";
        solve(ans, op, s);
        return ans;
    }
};