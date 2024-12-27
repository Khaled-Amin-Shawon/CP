#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int r1 = a + b + c, r2 = (a + b) * c, r3 = a * (b + c), r4 = a + b * c, r5 = a * b + c, r6 = a * b * c;
    int result = max({r1, r2, r3, r4, r5, r6});
    cout << result << endl;
}