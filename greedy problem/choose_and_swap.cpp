/*
https://practice.geeksforgeeks.org/problems/choose-and-swap0531/1
*/

class Solution{
public:
    string chooseandswap(string a){
        // Code Here
        
        int n=a.size();
        vector<int>ch(26,0);
        for(int i=0;i<n;i++){
            int num=a[i]-'a';
            ch[num]++;
        }
       
        char x;
        char y;
        bool found=false;
        for(int i=0;i<n;i++){
            int num=a[i]-'a';
            ch[num]=0;
            for(int j=0; j<num;j++){
                if(ch[j]>0){
                    
                    x=a[i];
                    y='a'+j;
                    found=true;
                    break;
                }
                if(found) break;
            }
            if(found)break;
        }
        for(int i=0;i<n;i++){
            if(a[i]==y) a[i]=x;
            else if(a[i]==x) a[i]=y;
        }
        return a;
    }
};