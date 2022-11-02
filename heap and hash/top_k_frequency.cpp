/*
https://leetcode.com/problems/top-k-frequent-elements/
*/

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>m;
        int n=nums.size();
        for(int i=0;i<n;i++) m[nums[i]]++;
        priority_queue <pair<int,int>> pq;

        for(auto i : m){
            int num=i.first;
            int freq=i.second;
            pq.push({freq,num});
        }
        vector<int>ans;
        while(k){
            ans.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return ans;
        
    }
};