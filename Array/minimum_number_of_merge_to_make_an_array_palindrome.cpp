
/*
https://www.geeksforgeeks.org/find-minimum-number-of-merge-operations-to-make-an-array-palindrome/
*/

// C++ program to find number of operations
// to make an array palindrome
#include <bits/stdc++.h>
using namespace std;
 
int findMinOps(int arr[], int n)
{
    int i=0;
    int j=n-1;
    int count=0;
    while(i<j){
        if(arr[i]==arr[j]){
            i++;
            j--;
        }
        else if(arr[i]<arr[j]){
            i++;
            arr[i]=arr[i]+arr[i-1];
            count++;
            
        }
        else if(arr[i]>arr[j]){
            j--;
            arr[j]=arr[j]+arr[j-1];
            count++;
        }
    }
    return count;
}
 
// Driver program to test above
int main()
{
    int n;
    cin >> n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Count of minimum operations is " <<  findMinOps(arr, n) << endl;
    return 0;
}