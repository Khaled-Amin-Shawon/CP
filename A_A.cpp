#include <iostream>
#include <string>

using namespace std;

int max_cost(string s)
{

    int max_cost = 0;
    int count_zeros = 0, count_ones = 0;
    for (char ch : s)
    {
        int current_cost_ones = count_zeros * count_ones * (ch == '1'); // Concisely handle cost for 1s
        int current_cost_zeros = count_ones * count_ones * (ch == '0'); // Concisely handle cost for 0s
        max_cost = max(max_cost, current_cost_ones, current_cost_zeros);
        count_zeros += (ch == '0');
        count_ones += (ch == '1');
    }
    return max_cost;
}

int main()
{
    string test_cases[] = {"11100", "1100110", "011110", "1001010", "1000", "0"};
    int num_cases = sizeof(test_cases) / sizeof(test_cases[0]);

    for (int i = 0; i < num_cases; ++i)
    {
        int result = max_cost(test_cases[i]);
        cout << result << endl;
    }

    return 0;
}
