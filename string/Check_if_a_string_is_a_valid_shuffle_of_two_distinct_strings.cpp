/*
https://www.geeksforgeeks.org/check-if-the-given-string-is-shuffled-substring-of-another-string/
*/

int main(){
    string str1,str2;
    cin >> str1 >> str2;
    for(int i=0;i<str1.length();i++){
        int flag=0;
        for( int j=0;j<str2.length();j++){
            if(str1[i]==str2[j]){
                str2[j]=='0';
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout << false;
            return 1;
        }
    }
    cout << true;
}