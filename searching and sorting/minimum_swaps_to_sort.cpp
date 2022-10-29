/*
https://practice.geeksforgeeks.org/problems/minimum-swaps/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
*/

class Solution 
{
    public:

	int minSwaps(vector<int>&nums)
	{
	    int swaps=0;
	    vector<pair<int,int>>v;
	    int n=nums.size();
        for(int i=0;i<n;i++){
            v.push_back({nums[i] , i});
        }

	    sort(v.begin(),v.end());

        int i=0;
	    while(i<n){
	        if(v[i].second == i) i++;
	        else{
	            int pre_idx=v[i].second;
	            swap(v[i],v[pre_idx]);
	            swaps++;
	        }
	    }
	    return swaps;
	}
};