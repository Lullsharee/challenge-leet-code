#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minEatingSpeed(vector<int>& piles, int h) {
    int left = 1,right;
    auto max_it = max_element(piles.begin(), piles.end());
    right = *max_it;
    while (left < right) {
      int mid = left + (right - left) / 2;
      int sum = 0;
      for (int i = 0; i < piles.size(); i++) {
        if (piles.at(i) % mid != 0) {
          sum += (piles.at(i) / mid) + 1;
        } else {
          sum += (piles.at(i) / mid);
        }
      }
      if (sum <= h) {
        right = mid;
      } else {
        left = mid + 1;
      }
    }
    return right;
}

int main() {
  int N,h;
  cin >> N;
  vector<int> piles(N);
  for (int i = 0; i < N; i++) cin >> piles.at(i);
  cin >> h;
  int ans = minEatingSpeed(piles, h);
  cout << ans << endl;
}