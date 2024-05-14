#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<int> sort_nums = nums;
    vector<vector<int>> ans;
    sort(sort_nums.begin(), sort_nums.end());
    for (int i = 0; i < sort_nums.size(); i++) {
      if (i != 0 && sort_nums[i] == sort_nums[i-1]) continue;
      int left = i+1;
      int right = sort_nums.size() - 1;
      while(left < right) {
        int sum = sort_nums[i] + sort_nums[left] + sort_nums[right];
        if (sum == 0) { 
          ans.push_back({sort_nums[i], sort_nums[left], sort_nums[right]});
          left++; right--;
          while (left < right && sort_nums[left-1] == sort_nums[left]) left++;
          while (left < right && sort_nums[right] == sort_nums[right+1]) right--;
        } else if (sum < 0)  {
          left++;
        } else if (0 < sum) {
          right--;
        }
      }
    }
    return ans;
}

int main() {
  int N;
  cin >> N;
  vector<int> nums(N);
  for(int i = 0; i < N; i++) cin >> nums.at(i);
  vector<vector<int>> ans = threeSum(nums);
      for (const auto& inner_vec : ans) { // 各inner_vecはvector<int>
        for (int num : inner_vec) {     // inner_vecの各要素を出力
            std::cout << num << " ";
        }
        std::cout << std::endl; // 各vector<int>の出力後に改行
    }
}