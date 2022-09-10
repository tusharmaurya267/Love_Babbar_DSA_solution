/*

https://practice.geeksforgeeks.org/problems/8a644e94faaa94968d8665ba9e0a80d1ae3e0a2d/1

*/
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
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

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends