/*
https://practice.geeksforgeeks.org/problems/largest-number-formed-from-an-array1117/1
*/

class Solution{
public:

	static bool myComp(string &s1 , string &s2){
	    return s1+s2 > s2+s1;
	}
	string printLargest(vector<string> &arr) {
	    // code here
	    string str="";
	    sort(arr.begin(),arr.end(),myComp);
	    
	    for(int i=0;i<arr.size();i++){
	        str=str+arr[i];
	    }
	    return str;
	}
};
