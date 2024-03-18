#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) {
  unordered_map<int, int> map;
  for (int i = 0; i < nums.size(); i++) map[nums[i]]++;
  vector<vector<int>> tmp(nums.size() + 1);
  for (auto it = map.begin(); it != map.end(); it++) {
    tmp[it->second].push_back(it->first);
  }
  vector<int> ans;
  for (int i = tmp.size(); i >=0; i--) {
    if (ans.size() >= k) {
      break;
    }
    if (!tmp.at(i).empty()) {
      ans.insert(ans.end(), tmp[i].begin(), tmp[i].end());
    }
  }
  return ans;
}
 
int main() {
  int K, N;
  cin >> K >> N;
  vector<int> inp(N);
  for (int i = 0; i < N; i++) cin >> inp.at(i);
  
}