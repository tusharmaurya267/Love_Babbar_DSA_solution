/*
https://practice.geeksforgeeks.org/problems/replace-every-element-with-the-least-greater-element-on-its-right/1
*/

class Solution{
    public:
    vector<int> findLeastGreater(vector<int>& arr, int n) {
        vector<int>ans(n,-1);
        set<int>s;
        for(int i=n-1;i>=0;i--){
            auto it=s.upper_bound(arr[i]);
            if(it != s.end()) ans[i]=*it;
            s.insert(arr[i]);
        }
        return ans;
    }
};