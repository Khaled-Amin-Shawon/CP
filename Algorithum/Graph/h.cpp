/*
||-----------------------------------||
||       Khaled  Amin  Shawon        ||
||         Big Khaled code           ||
||-----------------------------------||
*/
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO" << endl;
#define yes cout << "YES" << endl;
#define fr(i, n) for (ll i = 0; i < n; i++)
#define fr1(i, n) for (ll i = 1; i <= n; i++)
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);
using namespace std;

void solve() {
    int n;
    cout<<"Enter the number of elements :";
    cin>>n;
    int wt[n],val[n];
    cout<<"Enter the weights and values :"<<endl;
    for(int i=0;i<n;i++){
        cout<<i+1<<" element ->";
        cin>>wt[i];
        cin>>val[i];
    }
    int W ;
    cout<<"Enter the maximum weight :";
    cin>>W;

    double ratio[n];
    int idx[n];
    for (int i = 0; i < n; i++) {
        ratio[i] = (double)val[i] / wt[i];
        idx[i] = i;
    }

    sort(idx, idx + n, [&ratio](int a, int b) {
        return ratio[a] > ratio[b];
    });

    int cur_wt = 0; 
    double fi_val = 0.0; 

    for (int i = 0; i < n; i++) {
        if (cur_wt + wt[idx[i]] <= W) {
            cur_wt += wt[idx[i]];
            fi_val += val[idx[i]];
        }
        else {
            int remain = W - cur_wt;
            fi_val += val[idx[i]] * ((double)remain / wt[idx[i]]);
            break; 
        }
    }

    cout << "Maximum value in Knapsack = " << fi_val << std::endl;

}
int main()
{
    ll t = 1;
    while (t--)
    {
        solve();
    }
}