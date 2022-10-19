/*
https://leetcode.com/problems/palindrome-partitioning/
*/

class Solution {
public:
    bool ispalid(string str, int start, int end){
        while(start<=end){
            if(str[start] != str[end]) return false;
            start++;
            end--;
        }
        return true;
    }
    void solve(vector<vector<string>>&ans, vector<string> &path, string &s, int idx){
        if(idx==s.size()){
            ans.push_back(path);
            return;
        }

        for(int i=idx;i<s.size();i++){
            if(ispalid(s,idx,i)){
                path.push_back(s.substr(idx,i-idx+1));
                solve(ans,path,s,i+1);
                path.pop_back();
            }    
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>path;
        solve(ans,path,s,0);
        return ans;
    }
};