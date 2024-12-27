#include <iostream>

using namespace std;

bool canAliceWin(int n) {
  // If there are only two 1s, Bob wins.
  if (n == 2) {
    return false;
  }

  // If there are three 1s, Bob wins.
  if (n == 3) {
    return false;
  }

  // Otherwise, Alice can win.
  return true;
}

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;

    if (canAliceWin(n)) {
      cout << "Alice" << endl;
    } else {
      cout << "Bob" << endl;
    }
  }

  return 0;
}
