/*
Shyam has a cake shop and he receives a lot of orders. He doesn't have any inventory so he rents them. 
There is an oven shop near him with an unlimited supply of ovens. 
He has decided to bake n ovens today. The i-th cake is scheduled to be baked from Aj-th to Bi-th minute. 
The i-th elements of array A and array B denote the baking time scheduled to bake the i-th cake. 
He can rent ovens from the oven shop to bake cakes. The shop rents ovens in this manner. 
For every oven that someone rents, 
they have to pay one Time rupees plus x rupees for every extra minute that the borrower keeps the oven. 
Find the minimum rupees that Shyam will spend if he rents the ovens from the shop optimally 
with the objective of reducing the total rupees that he spends renting the ovens modulo.


Input Format

The first line contains the integer one Time.
The second line contains the integer x.
The third line contains n.
The next n lines contain the elements of array A.
The next line contains n.
The next n lines contain the elements of array B.


Output Format

Output the minimum rupees that he can spend to bake all his
cakes by renting ovens.


Example :
input:
10
4
3
1
2
4
5
9
11
output:
52

Explanation:

Here the cakes need to be baked during the intervals [1,2], [4,5], [9.
11].
We can rent one oven to bake the first two cakes and return it as soon as the second cake is finished baking. 
The cost will be 10+5*4-30. To bake the third cake we will rent another oven which will cost 10+34= 22.

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int oneTime,x,n;
    cin >> oneTime >> x >> n;
    vector<int>a;
    vector<int>b;
    int y,z;
    for(int i=0;i<n;i++){
        cin >> y >> z;
        a.push_back(y);
        b.push_back(z);
    }
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        v.push_back({a[i], b[i]});
    }
    sort(v.begin(), v.end());
    int total=oneTime;
    for(int i=0;i<n;i++){
        int next_start=v[i+1].first;
        int pre_start=v[i].first;
        int pre_end=v[i].second;
        total+=(pre_end-pre_start+1)*x;

        if(i!=n-1){
            if((next_start-pre_end-1)*x >= oneTime){
                total=total+oneTime;
            }
            else{
                total+=(next_start-pre_end-1)*x;
            }
        }
        
    }
    cout << total;
}