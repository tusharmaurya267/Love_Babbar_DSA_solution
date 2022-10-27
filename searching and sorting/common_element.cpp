/*
https://practice.geeksforgeeks.org/problems/common-elements1132/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
*/

class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            map<int,int>m;
            int i=0; int j=0; int k=0;
            while(i<n1 || j<n2 || k<n3){
                if(i<n1 && A[i]!=A[i-1]) m[A[i]]++;
                if(j<n2 && B[i]!=B[i-1]) m[B[j]]++;
                if(k<n3 && C[i]!=C[i-1]) m[C[k]]++;
                i++;
                j++;
                k++;
            }
            vector<int>ans;
            for(auto i : m){
                int num=i.first;
                int freq=i.second;
                if(freq>=3) ans.push_back(num);
            }
            return ans;
        }
};