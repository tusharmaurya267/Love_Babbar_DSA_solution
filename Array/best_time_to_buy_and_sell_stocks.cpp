/*
https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
      
      int profit=0;
      int max_profit=0;
      int curr=INT_MAX;
      for(int i=0;i<prices.size();i++){
        curr=min(prices[i],curr);
        profit=prices[i]-curr;
        max_profit=max(max_profit,profit);
      }
      return max_profit;
    }
};