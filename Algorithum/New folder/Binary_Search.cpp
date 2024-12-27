#include <bits/stdc++.h>
using namespace std;
// Binary Search function
int BinarySearch(int array[], int n, int x)
{
    int i = 0, f = n - 1;
    while (i <= f)
    {
        int mid = i + (f - i) / 2;
        if (array[mid] == x)
        {
            return mid;
        }
        if (array[mid] < x)
        {
            i = mid + 1;
        }
        else
        {
            f = mid - 1;
        }
    }
    return -1;
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
    int ans = BinarySearch(array, n, x);
    if (ans == -1)
    {
        cout << "the number do not exist in the array" << endl;
    }
    else
    {
        cout << "Index of the number is " << ans << endl;
    }
}