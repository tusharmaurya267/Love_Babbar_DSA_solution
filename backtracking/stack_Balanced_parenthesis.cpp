#include<bits/stdc++.h>
using namespace std;

void solver(int open, int close, vector<string>&v, string op){
    if(open==0 && close==0){
        v.push_back(op);
        return;
    }
    if(open!=0){
        string op1=op;
        op1.push_back('(');
        solver(open-1,close,v,op1);
    }
    if(close>open){
        string op2=op;
        op2.push_back(')');
        solver(open,close-1,v,op2);
    }
    return;
}

void balanced_parenthesis(int n , vector<string>&v ){
    int open=n;
    int close=n;
    string op="";
    solver(open,close,v,op);
    return;
}

int main(){
    int n;
    cin >> n;
    vector<string>v;
    balanced_parenthesis(n,v);
    for(int i=0;i<v.size();i++){
        cout << v[i] << endl;
    }
    return 0;
}