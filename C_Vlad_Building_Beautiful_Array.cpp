#include <iostream>
#include <vector>

using namespace std;

string solveTestcase() {
    int n;
    cin >> n;

    vector<int> a(n);
    int evenCount = 0, oddCount = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    if (evenCount == n || oddCount == n) {
        return "YES";
    } else if (evenCount > 0 && oddCount > 0) {
        return "NO";
    } else {
        return "YES";
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        cout << solveTestcase() << endl;
    }

    return 0;
}
