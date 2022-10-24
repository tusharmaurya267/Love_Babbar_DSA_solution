/*
https://practice.geeksforgeeks.org/problems/smallest-number5829/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
*/

class Solution{   
public:
    string smallestNumber(int s, int d){
        
        string str="";
        if(s>9*d) return "-1";
        s=s-1;
        d--;
        for(int i=d;i>=1;i--){
            if(s>9){
                str="9"+str;
                s=s-9;
            }
            else if(s<=9){
                str=to_string(s)+str;
                s=0;
            }
        }
        str=to_string(s+1)+str;
        
        return str;
    }
};