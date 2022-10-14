#include<bits/stdc++.h>
using namespace std;

void delete_mid(stack<int>&s,int k){
    if(k==1){
        s.pop();
        return;
    }
    int temp=s.top();
    s.pop();
    delete_mid(s,--k);
    s.push(temp);
    return;
}

int main(){
    int n;
    cin >> n;
    stack<int>s;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.push(x);
    }
    int k=(n/2)+1;
    delete_mid(s,k);
    for(int i = 0; i < n; i++) {
        cout << s.top() <<" ";
        s.pop();
    }
    cout << endl;
}