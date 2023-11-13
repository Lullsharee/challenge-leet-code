#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;


vector<int> twoSum(vector<int>& nums, int target) {
  for (int i = 0; i < nums.size(); i++) {
    for (int j = i+1; j < nums.size(); j++) {
      if (nums[i] + nums[j] == target) return {i, j};
    }  
  }
  return {};
}

vector<int> twoSumByHash(vector<int>& nums, int target) {
  unordered_map<int, int> map;
  for (int i = 0; i < nums.size(); ++i) map[nums[i]] = i;
  for (int i = 0; i < nums.size(); ++i) {
    int comp = target - nums[i];
    if(map.find(comp) != map.end() && map[comp] != i) return {i, map[comp]};
  }
  return {};
}

int main() {
  int N;
  cin >> N;
  vector<int> a(N);
  for(int i = 0; i < N; ++i) cin >> a[i];
  int target;
  cin >> target;
  // vector<int> res = twoSum(a, target);
  vector<int> res = twoSumByHash(a, target);
  cout << "[" << res[0] << "," << res[1] << "]" << endl;
}