#include <bits/stdc++.h>
#include<vector>
using namespace std;
// void reverse(int arr[], int n)
// {
//     reverse(arr, arr + n);
// }
int main()
{
    int tast;
    cin >> tast;
    for (int k = 0; k < tast; k++)
    {
        int num;
        cin >> num;
        long long int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < num; i++)
        {
            int tamp = n % 10;
            n = n / 10;
            if (tamp == 0)
            {
                tamp = n % 100;
                n = n / 100;
                i = i + 2;
            }

            v.push_back(tamp);
           // cout << v[i] << " ";
        }
        
         reverse(v.begin(), v.end());
        // cout<<"\n";
        // for (int i = 0; i < num; i++)
        // {
        //     cout<<v[i]<<" ";
        // }

        //  cout<<"\n";
        for (int i = 0; i <v.size(); i++)
        {
            // int ans=v[i];
            if (v[i > 0 && v[i] < 27])
            {
                // ans=ans*10+v[i+1];
                // i=i+2;
                char c = char(96 + v[i]);
                cout << c;
            }
            // cout<<ans<<"= ";
        }
        cout << "\n";
    }
}