./*
https://practice.geeksforgeeks.org/problems/fractional-knapsack-1587115620/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
*/

class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    
    static bool comp(Item a, Item b){
        double ratio1 = (double) a.value/a.weight;
        double ratio2 = (double) b.value/b.weight;
        return ratio1 > ratio2;
    }
    
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // int W=0;
        sort(arr, arr+n , comp);
        double ans=0;
        for(int i=0; i<n; i++){
            int value=arr[i].value;
            int weight=arr[i].weight;
  
            if(W>0){
                if(W-weight<0){
                    int left_weight=W;
                    double ratio=((double)value/weight) * left_weight;
                    ans=ans+ratio;
                }
                else{ 
                    ans=ans+value;
                }
                W-=weight;
            }
        }
        return ans;
    }
};


// USING THE vector<pair<pair<int,int>,int>>v;
// class Solution
// {
//     public:
//     //Function to get the maximum total value in the knapsack.
    
//     static bool comp(pair<pair<int,int>,double> a ,pair<pair<int,int>,double> b){
//         return a.second > b.second;
//     }
    
//     double fractionalKnapsack(int W, Item arr[], int n)
//     {
//         vector<pair<pair<int,int>,double>>v;
//         for(int i=0; i <n ;i++){
//             int val=arr[i].value;
//             int wt=arr[i].weight;
//             double ratio= (double)val/wt;
//             v.push_back({{wt,val},ratio});
//         }
//         double ans=0;
//         sort(v.begin(),v.end(),comp);
        
//         for(int i=0;i<n;i++){
//             int val=v[i].first.second;
//             int wt=v[i].first.first;
//             double ratio=v[i].second;
//             if(W>0){
//                 if(W-wt < 0){
//                     ans+=((double)ratio*W);
//                 }
//                 else{
//                     ans+=val;
//                 }
//                 W-=wt;
//             }
//         }
//         return ans;
//     }
// };