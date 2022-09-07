#include<bits/stdc++.h>
using namespace std;
int chocolate(int *arr, int n, int m){
    sort(arr,arr+n);
    int maxi=INT_MAX;
    int j=m-1;
    for(int i=0;i<n-m;i++,j++){
        int diff=arr[j]-arr[i];
        maxi=min(diff,maxi);
    }
    return maxi;
    
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