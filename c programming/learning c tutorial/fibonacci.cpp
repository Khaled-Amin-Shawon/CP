#include <bits/stdc++.h>
using namespace std;
int fibo(int n)
{
    if (n == 1 || n == 0)
        return 1;
    return fibo(n - 1) + fibo(n - 2);
}
int main()
{
    int a;
    cin >> a;
    int var = fibo(a);
    cout << var << endl;
    return 0;
}