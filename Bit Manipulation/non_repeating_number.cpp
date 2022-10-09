/*
https://practice.geeksforgeeks.org/problems/finding-the-numbers0215/1
*/

class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        vector<int>ans;
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto i:m){
            int n=i.first;
            int freq=i.second;
            if(freq==1) ans.push_back(n);
        }
        m.clear();
        return ans;
    }
};