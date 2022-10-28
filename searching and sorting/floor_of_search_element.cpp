/*
https://practice.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
*/

class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    
    int findFloor(vector<long long> v, long long n, long long x){
        int i=0;
        int j=n-1;
        int mid;
        if(x<v[i]) return -1;
        if(x>=v[j]) return j;
        while(i<=j){
            mid=i+(j-i)/2;
            if(v[mid]==x) return mid;
            
            if(v[mid]<x){
                i=mid+1;
            }
            else{
                j=mid-1;
            }
            
        }
        if(i==0) return -1;
        return mid-1;
    }
};