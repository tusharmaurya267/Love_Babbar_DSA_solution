/*
https://leetcode.com/problems/pascals-triangle/submissions/827551003/
*/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n=numRows;
        vector<vector<int>>ans(n);

        for(int i=0;i<n;i++){
            int m=i+1;
            ans[i].resize(m);
            ans[i][0] = ans[i][m-1] = 1;

            for(int j=1;j<m-1;j++){
                ans[i][j]=ans[i-1][j-1] + ans[i-1][j];
            }
        }
        return ans;
    }
};