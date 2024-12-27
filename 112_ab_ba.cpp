#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    long long result = pow(a, b) - pow(b, a);
    cout << result << endl;

    return 0;
}