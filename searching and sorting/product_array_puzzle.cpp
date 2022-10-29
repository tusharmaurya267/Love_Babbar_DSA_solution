/*
https://practice.geeksforgeeks.org/problems/product-array-puzzle4525/1
*/

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        long long int pro=1;
        int zero=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                zero++;
                continue;
            }
            pro=pro*nums[i];
            if(zero>=2){
                pro=0;
                break;
            }
        }
        // cout << pro << endl;
        
        if(zero==1)
        for(int i=0; i<n;i++){
            if(nums[i]==0) nums[i]=pro;
            else nums[i]=0;
        }
        
        else if(zero==0)
        for(int i=0;i<n;i++){
            nums[i]=pro/nums[i];
        }
        
        else
        for(int i=0;i<n;i++){
            nums[i]=0;
        }
            
        return nums;
    }
};