#include<bits/stdc++.h>
using namespace std;

void duplicate(string str){
    for(int i=0;i<str.length();i++){
        for(int j=0;j<str.length() && str[i]!='0';j++){
            if(i!=j && str[i]==str[j]){
                cout << str[i]<<" ";
                str[j]='0';
            }
        }
    }
}

int main(){
    string str;
    cin >> str;
    duplicate(str);
    return 0;
}