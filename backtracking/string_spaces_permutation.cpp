//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:

    void solve(string input,string output,vector<string> &v ){
        if(input.length()==0){
            v.push_back(output);
            return;
        }
        string output1=output+input[0];
        string output2=output+" "+input[0];
        input.erase(input.begin()+0);
        solve(input,output1,v);
        solve(input,output2,v);
        return;
    }
    
    
    vector<string> permutation(string S){
        // Code Here
        vector<string>v;
        string output="";
        output.push_back(S[0]);
        S.erase(S.begin()+0);
        solve(S,output,v);
        reverse(v.begin(),v.end());
        return v;
    }
};

//{ Driver Code Starts.

int  main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        vector<string> ans;
        Solution obj;
        ans = obj.permutation(S);
        for(int i=0;i<ans.size();i++){
            cout<<"("<<ans[i]<<")";
        }
        cout << endl;
    }
}

// } Driver Code Ends