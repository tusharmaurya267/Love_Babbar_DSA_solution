class Solution {
public:
    int minimumCostOfBreaking(vector<int> x, vector<int> y, int m, int n){
        sort(x.begin() , x.end() , greater<int>());
        sort(y.begin() , y.end() , greater<int>());
        int horizontal_count=1;
        int vertical_count=1;
        int ans=0;
        int i=0;
        int j=0;
        while(i<m-1 && j<n-1){
            if(x[i] > y[j]){
                ans+=vertical_count * x[i];
                horizontal_count++;
                i++;
            }
            else{
                ans+=horizontal_count * y[j];
                vertical_count++;
                j++;
            }
        }
        while(i<m-1){
            ans+=vertical_count * x[i];
            horizontal_count++;
            i++;
        }
        while(j<n-1){
            ans+=horizontal_count * y[j];
            vertical_count++;
            j++;
        }
        return ans;
    }
};