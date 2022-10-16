/*
https://leetcode.com/problems/flood-fill/submissions/823958292/
*/

class Solution {
public:

    void solve(int i, int j, vector<vector<int>>& image, int old, int new_color, int n, int m){
        if(i<0 || j<0 || i==n || j==m || old!=image[i][j] ) return;
        image[i][j]=new_color;
        solve(i+1,j,image,old,new_color,n,m);
        solve(i-1,j,image,old,new_color,n,m);
        solve(i,j+1,image,old,new_color,n,m);
        solve(i,j-1,image,old,new_color,n,m);

    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int old=image[sr][sc];
        if(old==color) return image;
        int n=image.size();
        int m=image[0].size();
        solve(sr, sc, image, old, color, n, m);
        return image;
    }
};