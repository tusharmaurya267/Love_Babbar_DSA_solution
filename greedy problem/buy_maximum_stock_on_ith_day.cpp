/*
https://practice.geeksforgeeks.org/problems/buy-maximum-stocks-if-i-stocks-can-be-bought-on-i-th-day/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
*/

class Solution {
public:
    int buyMaximumProducts(int n, int k, int price[]){
        //Write your code here
        vector<pair<int,int>>m;
        for(int i=0;i<n;i++){
            m.push_back({price[i],i+1});
        }
        sort(m.begin(),m.end());
        int count=0;
        for(auto i: m){
            int price=i.first;
            int max_stock=i.second;
            if(k<price) break;
            while(max_stock){
                if(k>=price){
                    k=k-price;
                    count++;
                }
                max_stock--;
            }
        }
        return count;
    }
};