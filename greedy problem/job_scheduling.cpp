/*
https://practice.geeksforgeeks.org/problems/job-sequencing-problem-1587115620/1
*/

class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    static bool comp(Job a, Job b){
        return a.profit>b.profit;
    }
    
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        sort(arr,arr+n,comp);
        
        vector<int>v(n+1,-1);
        int total_profit=0;
        int total_jobs=0;
        for(int i=0;i<n;i++){
            int id=arr[i].id;
            int profit=arr[i].profit;
            int dead=arr[i].dead;
            while(dead){
                if(v[dead] == -1){
                    v[dead]=1;
                    total_profit+=profit;
                    total_jobs++;
                    break;
                }
                dead--;
            }
        }
        return {total_jobs, total_profit};
    } 
};