/*
https://practice.geeksforgeeks.org/problems/8a644e94faaa94968d8665ba9e0a80d1ae3e0a2d/1
*/

class Solution {
public:
    
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
        
         // Code here
         vector<vector<int>>ans;
         sort(intervals.begin(),intervals.end());
         ans.push_back(intervals[0]);
         int k=0;
         for(int i=1;i<intervals.size();i++){
             if(ans[k][1]>=intervals[i][0]){
                 ans[k][1]=max(ans[k][1],intervals[i][1]);
             }
             else
             {
                 ans.push_back(intervals[i]);
                 k++;
             }
         }
         return ans;
    }
};
