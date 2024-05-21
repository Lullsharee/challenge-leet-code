#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int search(vector<int>& nums, int target) {
  int left = 0, right = nums.size() - 1;
  while (left <= right) {
    int mid = (left + right) / 2;
    if (nums[mid] > target) {
      right = mid - 1;
    } else if (nums[mid] < target) {
      left = mid + 1;
    } else {
      return mid;
    }
  }
  return -1;
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