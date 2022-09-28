/*
https://www.geeksforgeeks.org/chocolate-distribution-problem/
*/

int chocolate(int *arr, int n, int m){
    sort(arr,arr+n);
    int mini=INT_MAX;
    int j=m-1;
    for(int i=0;j<n;i++,j++){
        int diff=arr[j]-arr[i];
        mini=min(diff,mini);
    }
    return mini;
    
}
