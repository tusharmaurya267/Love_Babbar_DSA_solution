/*
https://practice.geeksforgeeks.org/problems/subsets-1587115621/1
*/

class Solution
{
    public:
    //Function to find all possible unique subsets.
    
    void solve(vector<vector<int>>&ans, vector<int> &arr,  vector<int>temp,int i){
    if(arr.size()==i){
        ans.push_back(temp);
        return;
    }

    temp.push_back(arr[i]);
    solve(ans,arr,temp,i+1);
    temp.pop_back();
    while(i+1<arr.size() && arr[i]==arr[i+1])i++;
    solve(ans,arr,temp,i+1);
}
    vector<vector<int> > AllSubsets(vector<int> arr, int n)
    {
        vector<vector<int>>v;
        vector<int>temp;
        sort(arr.begin(),arr.end());
        solve(v,arr,temp,0);
        sort(v.begin(),v.end());
        return v;
    }
};