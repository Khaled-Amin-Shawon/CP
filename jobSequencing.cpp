#include <bits/stdc++.h>
using namespace std;

struct Job
{
    int id;     // Job Id
    int dead;   // Deadline of job
    int profit; // Profit if job is over before or on deadline
};
// Comparator function to sort jobs according to decreasing order of profit
// bool JobPriority(Job a, Job b)
// {
//     if(a.dead<b.dead) return true;
//     if(a.dead==b.dead) return a.profit > b.profit;
//     return false;
// }
bool JobPriority(Job a, Job b) {
    return a.profit > b.profit;
}

class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        sort(arr, arr + n, JobPriority);
        int cnt = 0, profit = 0;
        bool done[n] = {0};
        for(int i = 0; i < n; i++) {
            for(int j = arr[i].dead - 1; j >= 0 ; j--) {
                if(done[j] == 0) {
                    done[j] = 1;
                    profit += arr[i].profit;
                    cnt++;
                    break;
                }
            }
        }
        vector<int> result;
        result.push_back(cnt);
        result.push_back(profit);
        return result;
    } 
};
//{ Driver Code Starts.
// Driver program to test methods
int main()
{
    int t;
    // testcases
    cin >> t;

    while (t--)
    {
        int n;

        // size of array
        cin >> n;
        Job arr[n];

        // adding id, deadline, profit
        for (int i = 0; i < n; i++)
        {
            int x, y, z;
            cin >> x >> y >> z;
            arr[i].id = x;
            arr[i].dead = y;
            arr[i].profit = z;
        }
        Solution ob;
        // function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}

// } Driver Code Ends