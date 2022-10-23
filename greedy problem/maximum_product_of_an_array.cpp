/*
https://practice.geeksforgeeks.org/problems/maximum-product-subset-of-an-array/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
*/

class Solution{
    public:
    long long int findMaxProduct(vector<int>&a, int n){
        //Write your code here  
        int m=1e9+7;
        int maxi=INT_MIN;
        int neg_count=0;
        int zero_count=0;
        int pos_count=0;
        long long int ans=1;
        for(int i=0;i<n;i++){
            if(a[i]==0){ 
                zero_count++; 
                continue;
            }
            
            if(a[i]>0){
                pos_count++;
                ans=(ans*a[i])%m;
            }
            
            if(a[i]<0){
                neg_count++;
                maxi=max(maxi,a[i]);
                ans=(ans*a[i])%m;
            }
        }
        if(ans<0 && zero_count!=0 && neg_count==1 && pos_count==0) return 0;
        if(ans<0){
            if(neg_count%2!=0 && (n>1) ){
                ans=(ans/maxi)%m;
                ans=(abs(ans))%m;
            }
        }
        return ans;
    }
};