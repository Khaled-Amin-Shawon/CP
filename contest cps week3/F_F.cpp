#include <iostream>
#include <string>

using namespace std;

int S(int n)
{
    // Calculates the digital root of a number n
    while (n >= 10)
    {
        int sum_of_digits = 0;
        while (n > 0)
        {
            sum_of_digits += n % 10;
            n /= 10;
        }
        n = sum_of_digits;
    }
    return n;
}

int find_kth_number(int k, int x)
{
    

    if (k <= 0 || 1 > x || x > 9)
    {
        return -1; // Handle invalid inputs
    }

    if (k <= 9 * x)
    {
        // Direct method for smaller k
        int current = 1;
        int count = 0;
        while (count < k)
        {
            if (S(current) == x)
            {
                count++;
            }
            current++;
        }
        return current;
    }
    else
    {
        // Modular method for larger k
        int r = k % 9;

        if (r == 0)
        {
            return 9 * (k / 9);
        }
        else
        {
            string digits(r, char(x + '0'));
            if (r > 1 && x != 1)
            {
                digits = "9" + digits.substr(1);
            }
            return stoi(digits);
        }
    }
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int k, x;
        cin >> k >> x;
        int result = find_kth_number(k, x) - 1;
        cout << (result != -1 ? result : -1) << endl; // Handle cases where no such number exists
    }

    return 0;
}
