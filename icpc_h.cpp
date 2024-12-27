#include <iostream>
#include <vector>
using namespace std;

const long long MOD =998244353 ;

// Forward declaration of the power function
long long power(long long base, long long exp);

// Function to count the number of valid colorings
long long count_colorings(long long n, long long m, long long k) {
    if (k == 1) {
        return 0;  
    return (k * power(k - 1, n * m - 1)) % MOD;
}

// Function to compute (base^exp) % MOD using fast exponentiation
long long power(long long base, long long exp) {
    long long result = 1;
    base = base % MOD;
    
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % MOD;
        }
        exp = exp >> 1;
        base = (base * base) % MOD;
    }
    return result;
}

int main() {
    long long T;
    cin >> T;

    while (T--) {
        long long n, m, k;
        cin >> n >> m >> k;

        cout << count_colorings(n, m, k) << endl;
    }

    return 0;
}
