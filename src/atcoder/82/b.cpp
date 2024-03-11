#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  string S,T;
  cin >> S >> T;
  sort(S.begin(), S.end());
  sort(T.begin(), T.end());
  reverse(T.begin(), T.end());
  // bool ans = false;
  if (S < T) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}