#include <iostream>
using namespace std;

int p[1000];

int partition(int n) {
    p[0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            p[i] += p[i-j];
        }
    }
    return p[n];
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Partition numbers of " << num << " : " << partition(num) << endl;
    return 0;
}
