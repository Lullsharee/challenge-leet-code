#include <iostream>
#include <vector>
#include <cctype>
#include <algorithm>

using namespace std;

bool isPalindrome(string s) {
  string substr;
  for (char c: s) {
    if (isalpha(c) || isdigit(c)) {
      substr += tolower(c);
    }
  }
  string reverse_substr = substr;
  reverse(substr.begin(), substr.end());
  return reverse_substr == substr;
}

int main() {
  string input;
  cin >> input;
  bool ans = isPalindrome(input);
  cout << boolalpha << ans << endl;
}