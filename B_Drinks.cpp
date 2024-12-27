#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin >> n;
    double d=0;
   for (int i = 0; i < n; i++)
   {
    int x ; cin >> x; d+=x;
   }
    cout << fixed << setprecision(12) << d / n;
    return 0;
}