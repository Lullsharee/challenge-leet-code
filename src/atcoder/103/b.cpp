#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  string S, T;
  cin >> S >> T;
  int N;
  N = S.length();
  string ans = "No";
  for (int i = 0; i < N; ++i) {
    if (S == T) ans =  "Yes";
    S = S.substr(N-1) + S.substr(0, N - 1);
  }

  cout << ans << endl;
}
