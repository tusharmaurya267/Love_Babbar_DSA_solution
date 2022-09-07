/*
https://www.geeksforgeeks.org/chocolate-distribution-problem/
*/
#include<bits/stdc++.h>
using namespace std;
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
int main(){
    int n;
    cin >> n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int m;
    cin >> m;
    int a= chocolate(arr,n,m);
    cout << a << endl;
    return 0;
}