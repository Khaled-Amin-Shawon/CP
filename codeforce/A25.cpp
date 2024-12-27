#include <iostream>
using namespace std;
int main()
{
    int count;
    cin >> count;
    int array[count];
    for (int i = 0; i < count; i++)
    {
        cin>> array[i];
    }
    int last_even_num, last_odd_num, even = 0, odd = 0;
    for (int i = 0; i < count; i++)
    {
        if (array[i] % 2 == 0)
        {
            even++;
            last_even_num = i;
         //   cout << last_even_num <<" "<<even<< endl;
        }
        else
        {
            odd++;
            last_odd_num = i;
           // cout << last_odd_num<<" "<<odd << endl;
        }
    }
    if (even < odd)
    {
        cout << last_even_num+1 << endl;
    }
    else
    {
        cout << last_odd_num+1 << endl;
    }
}