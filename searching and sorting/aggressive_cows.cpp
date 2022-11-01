/*
https://practice.geeksforgeeks.org/problems/aggressive-cows/1
*/

class Solution {
public:
    
    bool check(int n, int k, vector<int> &v, int diff){
        int pre=v[0];
        int cow_placed=1;
        for(int i=1; i<n; i++){
            if(v[i]-pre >= diff){
                pre=v[i];
                cow_placed++;
            }
            if(cow_placed==k) return true;
        }
        return false;

        
    }
    int solve(int n, int k, vector<int> &v) {
    
        // Write your code here
        sort(v.begin(),v.end());
        int start=1;
        int end=v[n-1];
        int res=0;
        while(start <= end){
            int mid=(start+end)/2;
            if(check(n,k,v,mid)){ 
                res=mid;
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return res;
    }
};