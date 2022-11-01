/*
https://practice.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
*/

class Solution 
{
    public:
    //Function to find minimum number of pages.
    
    bool check(int A[], int n, int m, int max_pages){
        int sum=0;
        int count=1;
        int i=0;
        for(;i<n;i++){
            sum=sum+A[i];
            if(sum>max_pages){
                count++;
                sum=A[i];
            }
            if(count>m || A[i]>max_pages) return false;
            
            // if(A[i]>max_pages) return false;
            // if(sum+A[i]>max_pages){
            //     count++;
            //     sum=A[i];
            // }
            // else sum=sum+A[i];
            // if(count > m) return false;
        }
        return true;
    }
    
    int findPages(int A[], int n, int M) 
    {
        if(M>n) return -1;
        int sum=0;
        for(int i=0; i<n ; i++) sum+=A[i];
        int res=sum;
        int start=A[0];
        int end=sum;
        while(start <= end){
            int mid=(start+end)/2;
            if(check(A,n,M,mid)){
                res=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return res;
    }
};