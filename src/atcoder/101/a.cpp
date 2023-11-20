#include <iostream>
#include <vector>

using namespace std;

int main(){
  string s;
  cin >> s;
  int ans = 0;
  for (int i = 0; i < 4; ++i) {
    if (s[i] == '+') ans += 1;
    if (s[i] == '-') ans -= 1;
  }
  cout << ans << endl;
}