/*
https://practice.geeksforgeeks.org/problems/check-if-it-is-possible-to-survive-on-island4922/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
*/

class Solution{
public:
    int minimumDays(int s, int n, int m){

        if(m>n) return -1;
        int sunday=s/7;
        int left_days=s-sunday;
        
        
        int total_food = s * m;
        int total_days_to_buy_food = total_food/n;
        if(total_food%n != 0) total_days_to_buy_food++;
        if(total_days_to_buy_food <= left_days) return total_days_to_buy_food;
        return -1;
    }
};