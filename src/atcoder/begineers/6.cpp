#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int N;
  vector<int> a(101);
  cin >> N;
  for (int i = 0; i < N; ++i) cin >> a.at(i);

  sort(a.begin(), a.begin() + N, greater<int>());
  int p1 = 0;
  int p2 = 0;
  for (int i = 0; i < N; ++i) {
    if (i % 2 == 0) {
      p1 += a.at(i);
    } else {
      p2 += a.at(i);
    }
  }
  cout << p1 - p2 << endl;
}