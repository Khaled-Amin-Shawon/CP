#include <iostream>
using namespace std;
int main()
{
    double a;
    cin >> a;
    int x = a;
    if ((a - x) < 0.500)
    {
        cout << x << endl;
        return 0;
    }
    cout << x + 1 << endl;
}