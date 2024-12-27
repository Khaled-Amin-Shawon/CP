//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k)
    {
        vector<int> ans;
        if(k==1)
        {
            for (int i = 0; i < n; i++)
            {
                ans.push_back(arr[i]);
            }
            return ans;
        }
        int i = 0, j = 0,fk=k, mx = INT_MIN, mx_in = 0;
        while (j < n)
        {
            if (arr[j] >= mx)
            {
                mx_in = j;
            }
            mx = max(arr[j], mx);
            if (j < fk - 1)
            {
                
              // cout<<"     i= "<<i<<" j="<<j<<" k="<<fk<<" value "<<arr[j]<<"--> mx= "<<mx<<" in"<<mx_in<<endl;
               j++;
            }
            else
            {
                if (arr[i] == arr[mx_in])
                {
                    ans.push_back(mx);
                    i++;
                    j = i;
                    fk = i + k;
                    //cout<<"push i= "<<i<<" j="<<j<<" k="<<fk<<" value "<<arr[j]<<"--> mx= "<<mx<<" in"<<mx_in<<endl;
                     mx = INT_MIN;
                }
                else
                {
                   // cout<<"push i= "<<i<<" j="<<j<<" k="<<fk<<" value "<<arr[j]<<"--> mx= "<<mx<<" in"<<mx_in<<endl;
                    ans.push_back(mx);
                    i++;
                    j++;
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{

    int t;
    // cin >> t;
    t = 1;

    while (t--)
    {

        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}
// } Driver Code Ends