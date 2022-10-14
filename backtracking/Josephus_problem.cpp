#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>v,int k, int index){
    if(v.size()==1){
        cout << v[0];
        return;
    }
    index=(index+k)%v.size();
    v.erase(v.begin()+index);
    solve(v,k,index);
}


int main(){
    int k;
    cin >> k;
    string op="";
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        v.push_back(i);
    }
    solve(v,k,0);
    return 0;
}