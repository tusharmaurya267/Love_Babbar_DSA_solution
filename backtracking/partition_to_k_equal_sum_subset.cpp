/*
https://leetcode.com/problems/partition-to-k-equal-sum-subsets/
*/

class Solution {
public:

    bool solve(int i, int bucketnum, int bucketsum, int reqsum, int k, vector<int>& nums, vector<int>&alreadypicked){
        
        if(bucketsum==reqsum){
            return solve(0,bucketnum+1,0,reqsum,k,nums,alreadypicked);
        }
        if(bucketsum > reqsum) return false;
        if(alreadypicked[i]==1) {
            return solve(i+1,bucketnum,bucketsum,reqsum,k,nums,alreadypicked);
        }
        
        else{
            alreadypicked[i]=1;
            bucketsum+=nums[i];
            bool op1=solve(i+1,bucketnum,bucketsum,reqsum,k,nums,alreadypicked);
            bucketsum-=nums[i];
            alreadypicked[i]=0;

            bool op2=solve(i+1,bucketnum,bucketsum,reqsum,k,nums,alreadypicked);
            return op1 || op2;
        }
    }
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>alreadypicked(n,0);
        int sum=0;
        for(int i=0;i<n;i++) sum+=nums[i];
        if(sum%k != 0) return false;
        int reqsum=sum/k;
        return solve(0,1,0,reqsum,k,nums,alreadypicked);
    }
};