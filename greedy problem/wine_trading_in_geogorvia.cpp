/*
https://www.spoj.com/problems/GERGOVIA/#:~:text=GERGOVIA%20%2D%20Wine%20trading%20in%20Gergovia&text=Gergovia%20consists%20of%20one%20street,wants%20to%20buy%20or%20sell.
*/

int main(){
 
    int n;
    cin>>n;
    while(true){
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        vector<pair<int,int> > buy;
        vector<pair<int,int> > sell;
        for(int i=0;i<n;i++){
            if(a[i]>0) buy.push_back({a[i],i});
            else sell.push_back({a[i],i});
        }
        int ans = 0;
        int i=0,j=0;
        while(i<buy.size() and j<sell.size()){
            int x = min(buy[i].first,-sell[j].first);
            buy[i].first -= x;
            sell[j].first += x;
            int diff = abs(buy[i].second - sell[j].second);
            ans += (x * diff);
            if(buy[i].first == 0) i++;
            if(sell[j].first == 0) j++;
        }
        cout<<ans<<endl;
        cin>>n;
        if(n==0) break;
    }
}