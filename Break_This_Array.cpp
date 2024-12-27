#include <iostream>
#include <vector>
#include <string>

using namespace std;

const int MOD = 1e9 + 7;

// Function to calculate the modular multiplicative inverse
int modInverse(int a, int m) {
    int m0 = m;
    int y = 0, x = 1;

    if (m == 1)
        return 0;

    while (a > 1) {
        int q = a / m;
        int t = m;

        m = a % m;
        a = t;
        t = y;

        y = x - q * y;
        x = t;
    }

    if (x < 0)
        x += m0;

    return x;
}

// Function to calculate the expected sum
int calculateExpectedSum(vector<int>& arr, string& operations) {
    int n = arr.size();
    int k = operations.size();
    int inv_k = modInverse(k, MOD);
    int sum = 0;

    for (int i = 0; i < n; i++) {
        int left_count = i;
        int right_count = n - i - 1;
        int left_sum = (1LL * (left_count * (left_count + 1) / 2) % MOD * inv_k) % MOD;
        int right_sum = (1LL * (right_count * (right_count + 1) / 2) % MOD * inv_k) % MOD;

        if (operations[i % k] == 'L') {
            sum = (sum + 1LL * arr[i] * left_sum) % MOD;
        } else {
            sum = (sum + 1LL * arr[i] * right_sum) % MOD;
        }
    }

    return sum;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        string operations;
        cin >> operations;

        int expected_sum = calculateExpectedSum(arr, operations);
        cout << expected_sum << endl;
    }

    return 0;
}
