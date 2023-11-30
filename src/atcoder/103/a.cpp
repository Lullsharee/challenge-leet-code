#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector<int> an(3);
  for(int i = 0; i < 3; ++i) cin >> an[i];
  
  sort(an.begin(), an.end());

  int median;
  if (an.size() % 2 == 0) {
    median = (static_cast<double>(an[an.size() / 2 - 1]) + static_cast<double>(an[an.size() / 2])) / 2.0;
  } else {
    median = static_cast<double>(an[an.size() / 2]);
  }
  int ans = 0;
  for (int i = 0; i < 3; ++i) {
    ans += abs(an[i]-median);
  }
  cout << ans;
}