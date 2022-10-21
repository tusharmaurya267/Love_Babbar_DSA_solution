/*
https://practice.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1
*/

class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    static bool comp(pair<int,int>a , pair<int,int>b){
        if(a.second == b.second) return a.first < b.first;
        return a.second < b.second;
    }
    
    int maxMeetings(int start[], int end[], int n)
    {
        int count=1;
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            v.push_back({start[i],end[i]});
        }
        sort(v.begin(),v.end(),comp);
        int pre=v[0].second;
        for(int i=0; i<n; i++){
            int next=v[i].first;
            if(pre < next){
                count++;
                pre=v[i].second;
            }
        }
        return count;
    }
};