//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        int countzero=0,countone=0,counttwo=0;
        for (int i=0;i<n;i++){
            if(a[i]==0){
                countzero++;
            }
            if(a[i]==1){
                countone++;
            }
            if(a[i]==2){
                counttwo++;
            }
        }
        for(int j=0;j<n;j++){
            if(countzero!=0){
                a[j]=0;
                countzero--;
            }
            else if(countzero==0 && countone!=0){
                a[j]=1;
                countone--;
            }
            else if(countzero==0 && countone==0 && counttwo!=0){
                a[j]=2;
                counttwo--;
            }
        }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends