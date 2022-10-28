class Solution {
public:
    int bs(vector<int>& nums, int target, int start, int end, int left){
        int ans=-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(nums[mid] > target) end=mid-1;

            else if(nums[mid] < target) start=mid+1;
            else{
                ans=mid;
                if(left==1) end=mid-1;
                else start=mid+1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        
        int lb=bs(nums,target,0,n-1,1);
        int ub=bs(nums,target,0,n-1,0);
        return {lb, ub};
    }
    
    // vector<int> searchRange(vector<int>& nums, int target){
    //     int n=nums.size();
    //     int start=-1;
    //     int end=-1;
    //     int flag=0;
    //     for(int i=0;i<n;i++){
    //         if(flag==0 && target == nums[i]) {
    //             start=end=i;
    //             flag=1;
    //         }
    //         if(flag==1 && target == nums[i]){
    //             end=i;
    //         }
    //     }
    //     return {start , end};
    // }
};