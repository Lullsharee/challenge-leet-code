#include <iostream>
#include <vector>
using namespace std;



int center_search(vector<int> nums, int left, int right) {
  if (right < left) return -1;
  if (right == left) return left;

  int mid = (left + right) / 2;
  if (mid < right && nums[mid] > nums[mid+1]) return mid;
  if (mid > left && nums[mid] < nums[mid-1]) return mid - 1;
  if (nums[left] >= nums[mid]) return center_search(nums, left, mid - 1);
  return center_search(nums, mid+1, right);
}

int binary_search(vector<int> nums, int left, int right, int target) {
  if (right < left) return -1;
  int mid = (left + right) / 2;
  if (target == nums[mid]) return mid;
  if (target > nums[mid]) return binary_search(nums, mid+1, right, target);
  return binary_search(nums, left, mid-1, target);
}

int search(vector<int>& nums, int target) {
  int left = 0, right = nums.size()-1;
  int center = center_search(nums, left, right);

  if (center == -1) return binary_search(nums, left, right, target);
  if (nums[center] == target) return center;
  if (nums[0] <= target) return binary_search(nums, left, center -1, target);
  return binary_search(nums, center + 1, right, target);
}

int main() {
  int N, target;
  cin >> N;
  vector<int> nums(N);
  for(int i = 0; i < N; i++) cin >> nums.at(i);
  cin >> target;
  int ans = search(nums, target);
  cout << ans << endl;
}