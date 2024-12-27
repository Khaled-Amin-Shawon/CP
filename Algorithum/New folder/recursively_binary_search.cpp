#include <bits/stdc++.h>
using namespace std;
// Binary Search function
int BinarySearch(int array[], int i, int f, int x)
{
    while (i <= f)
    {
        int mid = i + (f - i) / 2;
        if (array[mid] == x)
        {
            return mid;
        }
        if (array[mid] < x)
        {
           return BinarySearch(array,mid+1,f,x);
        }
        else
        {
            return BinarySearch(array,i,mid-1,x);
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
    int ans = BinarySearch(array,0,n-1, x);
    if (ans == -1)
    {
        cout << "the number do not exist in the array" << endl;
    }
    else
    {
        cout << "Index of the number is " << ans << endl;
    }
}