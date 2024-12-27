//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
public:
    int rowWithMax1s(vector<vector<int> > &arr) {
        int ind=-1, count=0, index=0;
        for(auto i:arr){
            int k=0;
            for(auto j:i){
                if(j==1) k++;
            }
            if(k>count){
                count= k;
                ind=index;
            }
            index++;
        }
        return ind;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int> > arr(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends