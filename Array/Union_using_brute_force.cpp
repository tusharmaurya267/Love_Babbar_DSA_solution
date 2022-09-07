//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        int count=0;
        for(long i=0;i<n;i++){
            int flag=0;
            if(a[i]!=INT_MIN){
                for(int j=0;j<m || j<n;j++){
                if(j<m){
                    if(a[i]==b[j]){
                        flag=1;
                    }
                }
                if(j<n){
                    if(a[i]==a[j] && i!=j){
                        a[j]=INT_MIN;
                    }
                }
            }
            if(flag==0){
                count++;
            }
            }
        }
        return count+m;
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends