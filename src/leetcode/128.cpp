#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> nums(N);
  for (int i = 0; i < N; ++i) cin >> nums.at(i);
  std::sort(nums.begin(), nums.end());
  nums.erase(std::unique(nums.begin(), nums.end()), nums.end());
  int ans = 0;
  int marker = 1;
  for (int i = 0; i < nums.size()-1; i++){
    int current = nums.at(i);
    int next = nums.at(i + 1);

    if ((next - current) == 1) {
      marker += 1;
    } else {
      marker = 1;
    }
    if (marker > ans) ans = marker;
  }
  cout << ans << endl;
}