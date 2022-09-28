/*
https://www.geeksforgeeks.org/print-all-the-duplicates-in-the-input-string/
*/

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
