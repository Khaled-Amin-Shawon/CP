#include <iostream>
using namespace std;
int main()
{
    int mun;
    cin >> mun;
    int ln[14] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    bool result = false;
    for (int i = 0; i < 14; i++)
    {
        if (mun % ln[i] == 0)
        {
            result = true;
        }
    }
    if (result)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}