#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int search(vector<int>& nums, int target) {
  int size = nums.size();
  auto iter  = lower_bound(nums.begin(), nums.end(), target);
  int ans;
  if (iter != nums.end() && *iter == target) {
    ans =  distance(nums.begin(), iter);
  } else {
    ans = -1;
  }
  return ans;
}

int main() {
  int N;
  cin >> N;
  vector<int> nums(N);
  for (int i = 0; i < N; i++) cin >> nums.at(i);
  int target;
  cin >> target;
  int ans = search(nums, target);
  cout << ans << endl;  
}