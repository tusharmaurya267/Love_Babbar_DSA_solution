/*
https://practice.geeksforgeeks.org/problems/find-maximum-equal-sum-of-three-stacks/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
*/

class Solution{
public:

    int maxEqualSum(int N1,int N2,int N3,vector<int> &S1,vector<int> &S2,vector<int> &S3){
        int ans=0;
        int sum1=0; int i=0;
        int sum2=0; int j=0;
        int sum3=0; int k=0;
        for(int i=0;i<S1.size();i++) sum1+=S1[i];
        for(int i=0;i<S2.size();i++) sum2+=S2[i];
        for(int i=0;i<S3.size();i++) sum3+=S3[i];
        
        while(N1!=i && N2!=j && N3!=k){
            
            if(sum1 == sum2 && sum2 == sum3) return sum1;
            else if(sum1 >= sum2 && sum1 >= sum3){
                sum1-=S1[i];
                i++;
                
            }
            else if(sum2 >= sum1 && sum2 >= sum3){
                sum2-=S2[j];
                j++;
            }
            else{
                sum3-=S3[k];
                k++;
            }
        }
        return 0;
    }
};