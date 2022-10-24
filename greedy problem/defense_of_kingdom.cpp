/*
https://www.codechef.com/problems/WCE0004?tab=statement
*/


int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--)
	{
	    int w,h,n;
	    cin>>w>>h>>n;
	    vector<int> v1;
	    vector<int> v2;
	    v1.push_back(0);
	    v2.push_back(0);
	    for(int i=0;i<n;i++)
	    {
	        int x,y;
	        cin>>x>>y;
	        v1.push_back(x);
	        v2.push_back(y);
	    }
	    
	    v1.push_back(w+1);
	    v2.push_back(h+1);
	    sort(v1.begin(),v1.end());
	    sort(v2.begin(),v2.end());
	    int mx=0;
	    int my=0;
	    int size=v1.size();
	    for(int i=0;i<size-1;i++){
	        mx=max(mx,v1[i+1]-v1[i]-1);
	        my=max(my,v2[i+1]-v2[i]-1);
	    }
	    cout << mx*my << endl;
	}
}
