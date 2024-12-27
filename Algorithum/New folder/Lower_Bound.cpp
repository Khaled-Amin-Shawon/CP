#include <bits/stdc++.h>
using namespace std;
// Binary Search function
int BS_Lower_Bound(int array[], int n, int x)
{
    cout<<"Binary Search function"<<endl;
    int i = 0, f = n - 1;
    int lowBound=-1;
    while (i <= f)
    {
        int mid = i + (f - i) / 2;
        if (array[mid] < x)
        {
            i = mid + 1;
        }
        else
        {
            lowBound=mid;
            f=mid-1;
        }
        // else if (array[mid]>x)
        // {
        //     f = mid - 1;
        // }
    }
    return lowBound;
}
int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int x;
    cin >> x;
    sort(array, array + n);
    int ans =BS_Lower_Bound(array, n, x);
    if (ans == -1)
    {
        cout << "the number do not exist in the array" << endl;
    }
    else
    {
        cout << "Index of the number is " << ans << endl;
    }
}