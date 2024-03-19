#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
  int n = nums.size();
  vector<int> prevs(n);
  vector<int> sufs(n);

  prevs.at(0)= 1;
  for (int i = 1; i < n; ++i) {
    prevs.at(i) = prevs.at(i-1) * nums.at(i-1);
  }

  sufs.at(n-1) = 1;
  for(int i=n-2; i >= 0; i--) {
    sufs[i] = sufs[i+1] * nums[i+1];
  }
  vector<int> ans(n);
  for(int i = 0; i < n; i++) {
    ans.at(i) = prevs.at(i)  * sufs.at(i);
  }
  return ans;
}

int main() {
  int N;
  cin >> N;
  vector<int> nums(N);
  for (int i = 0; i < N; ++i) cin >> nums.at(i);
  for (const auto& num : productExceptSelf(nums)) {
      std::cout << num << " ";
  }
  std::cout << std::endl;
}