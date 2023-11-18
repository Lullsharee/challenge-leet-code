#include <iostream>
#include <vector>

using namespace std;


int main() {
  int N;
  cin >> N;
  vector<int> an(N);
  for (int i = 0; i < N; ++i) cin >> an[i];
  int ans = 0;
  for (int i = 0; i < N; ++i) {
    while (an[i] % 2 == 0) {
      an[i] /= 2;
      ans ++;
    }
  }
  cout << ans << endl;
}