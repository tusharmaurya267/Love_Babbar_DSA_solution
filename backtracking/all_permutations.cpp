/*
https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string2041/1
*/

class Solution
{
	public:
	    void solve(string s, set<string>&ans, int pos){
	        if(pos==s.size()){
	            ans.insert(s);
	            return;
	        }
	        for(int i=pos;i<s.size();i++){
	            swap(s[i],s[pos]);
	            solve(s,ans,pos+1);
	            swap(s[i],s[pos]);
	        }
	    }
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    set<string>ans;
		    vector<string>v;
		    solve(S, ans, 0);
		    for(auto i: ans)v.push_back(i);
		    return v;
		}
};



// #include <iostream>
// #include <string>
// using namespace std;

// void solver ( string input , string output )
// {
//     if ( input.length() == 0)
//     {
//         cout << output << endl;
//         return ;
//     }
//     for ( int i = 0 ; i <= output.length() ; i++ )
//     {
//         char ch=input[0];
//         // solver ( input.substr(1) , output.substr(0,i) + input [0] + output.substr(i));
//         solver ( input.substr(1) ,output.substr(0,i)+ch+output.substr(i));
//     }
    
// }

// void printPermutations(string input)
// {
//     solver ( input , "" );
//     return;
// }


// int main() {
//     string input;
//     cin >> input;
//     printPermutations(input);
//     return 0;
// }