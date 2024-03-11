#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  int ans = -1;
  int maxcount = -1;
  for (int i = 1; i < N + 1; i++) {
    int count = 0;
    int j = i;
    while (j % 2 == 0) {
      j /= 2;
      count += 1;
    }
    if (maxcount < count) {
      maxcount = count;
      ans = i;
    }
  }
  cout << ans << endl;
}