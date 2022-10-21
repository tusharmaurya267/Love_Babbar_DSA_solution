/*
https://practice.geeksforgeeks.org/problems/shop-in-candy-store1145/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
*/

class Solution
{
public:
    vector<int> candyStore(int candies[], int n, int k)
    {
        // Write Your Code here
        int maxi=0;
        int mini=0;
        sort(candies,candies+n);
        int i=0;
        int j=n-1;
        while(i<=j){
            mini=mini+candies[i];
            i++;
            j=j-k;
        }
        i=0;
        j=n-1;
        while(i<=j){
            maxi=maxi+candies[j];
            j--;
            i=i+k;
        }
        return { mini , maxi };
    }
};