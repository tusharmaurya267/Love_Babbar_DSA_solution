/*
https://leetcode.com/problems/valid-palindrome/
*/

class Solution{
public:	
	int isPalindrome(string S)
	{
	    int len=S.length()-1;
	    string str;
	    // Your code goes here
	    for(int i=0;i<=(S.length()/2);i++){
	        if(S[len-i]!=S[i]){
	            return 0;
	        }
	    }
	    return 1;
	}
};
