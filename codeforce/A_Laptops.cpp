// #include<bits/stdc++.h>
// #define ll long long int
// using namespace std;
 
// int main()
// {
//     ll num;
//     cin>>num;
//     ll price[num],quality[num];
//     for (ll i = 0; i < num; i++)
//     {
//         cin>>price[i]>>quality[i];
//     }
//     bool a=true;
//     for (ll i = 1; i < num; i++)
//     {
//         if (price[i]<price[i-1] || quality[i]>quality[i-1])
//         {
//             a=false;
//             break;
//         }
//     }
//     if (a==true)
//     {
//        cout<<"Happy Alex"<<endl;
//     }
//     else
//     {
//         cout<<"Poor Alex"<<endl;
//     }
    
    
    
// }
#include <iostream>
using namespace std;
int n, a, b;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        if (a != b) {
            cout << "Happy Alex";
            return 0;
        }
    }
    cout << "Poor Alex";
}