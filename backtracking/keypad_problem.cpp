// #include <iostream>
// #include <string>
// using namespace std;

// string sel(int num)
// {
//     if ( num == 2)
//         return "abc";
//     if ( num == 3)
//         return "def";
//     if ( num == 4)
//         return "ghi";
//     if ( num == 5)
//         return "jkl";
//     if ( num == 6)
//         return "mno";
//     if ( num == 7)
//         return "pqrs";
//     if ( num == 8)
//         return "tuv";
//     if ( num == 9)
//         return "wxyz";
// }


// void keypad (int num , string output)
// {
//     if ( num == 0)
//     {
//         cout << output << endl ;
//         return ;
//     }
//     int d = num % 10;
//     string str = sel(d);
//     for ( int i = 0 ; i < str.length() ; i++)
//     {
//         keypad ( num/10 , str[i] + output );
//     }
//     return;
    
// }

// void printKeypad(int num)
// { 
//     string output ="";
//     keypad ( num , output ); 
//     return;
// }

// int main(){
//     int num;
//     cin >> num;

//     printKeypad(num);

//     return 0;
// }


class Solution
{
    public:

    void solve(vector<string>&ans, string s, int a[], int n, int i, unordered_map<int,string>m){
        if(n==i){
            ans.push_back(s);
            return;
        } 
        string temp=m[a[i]];
        for(int j=0;j<temp.size();j++){
            s.push_back(temp[j]);
            solve(ans,s,a,n,i+1,m);
            s.pop_back();
        }
        
    }
    vector<string> possibleWords(int a[], int N)
    {
        unordered_map<int,string>m;
        m[2]="abc";
        m[3]="def";
        m[4]="ghi";
        m[5]="jkl";
        m[6]="mno";
        m[7]="pqrs";
        m[8]="tuv";
        m[9]="wxyz";
        
        vector<string>ans;
        string s="";
        solve(ans,s,a,N,0,m);
        return ans;
    }
};
