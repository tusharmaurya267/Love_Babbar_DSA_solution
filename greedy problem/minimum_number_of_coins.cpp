/*
https://practice.geeksforgeeks.org/problems/-minimum-number-of-coins4426/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
*/

class Solution{
public:
    vector<int> minPartition(int N)
    {
        vector<int>rs;
        rs.push_back(2000);
        rs.push_back(500);
        rs.push_back(200);
        rs.push_back(100);
        rs.push_back(50);
        rs.push_back(20);
        rs.push_back(10);
        rs.push_back(5);
        rs.push_back(2);
        rs.push_back(1);
        int n=rs.size();
        
        vector<int>ans;
        while(N>0){
            int i;
            for(i=0; i<n; i++){
                if((N-rs[i]) >= 0){
                    ans.push_back(rs[i]);
                    break;
                }
            }
            N=N-rs[i];
        }
        return ans;
    }
};