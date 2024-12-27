#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(const string& s) {
  int n = s.length();
  for (int i = 0; i < n / 2; ++i) {
    if (s[i] != s[n - 1 - i]) {
      return false;
    }
  }
  return true;
}

int main() {
  string s;
  cin >> s;

  if (isPalindrome(s)) {
    cout << "Yes" << endl; // First player wins if initial string is a palindrome
  } else {
    cout << "No" << endl; // Second player wins otherwise
  }

  return 0;
}
