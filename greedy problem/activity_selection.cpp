/*
https://practice.geeksforgeeks.org/problems/activity-selection-1587115620/1
*/

class Solution
{
    public:
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    
    static bool comp(pair<int,int>a , pair<int,int> b){
        if(a.second == b.second) return a.first<b.first;
        return a.second<b.second;
    }
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
        // Your code here
        int count=1;
        vector<pair<int,int>>v;
        for(int i=0 ;i<n ;i++){
            v.push_back({start[i],end[i]});
        }
        sort(v.begin(),v.end(),comp);

        int pre=v[0].second;
        for(int i=0;i<n;i++){
            int curr=v[i].first;
            if(pre<curr){
                count++;
                pre=v[i].second;
            }
        }
        return count;
    }
};