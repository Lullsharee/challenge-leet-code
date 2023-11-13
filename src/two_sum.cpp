#include <iostream>
#include <vector>

using namespace std;


vector<int> twoSum(vector<int>& nums, int target) {
  for (int i = 0; i < nums.size(); i++) {
    for (int j = i+1; j < nums.size(); j++) {
      if (nums[i] + nums[j] == target) return {i, j};
    }  
  }
}

int main() {
  int N;
  cin >> N;
  vector<int> a(N);
  for(int i = 0; i < N; ++i) cin >> a[i];
  int target;
  cin >> target;
  vector<int> res = twoSum(a, target);
  cout << "[" << res[0] << "," << res[1] << "]" << endl;
}