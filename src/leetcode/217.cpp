#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
  unordered_set<int> s;
  for (int i = 0; i < nums.size(); i++) {
    if (s.find(nums.at(i)) != s.end()) {
      return true;
    }
    s.insert(nums.at(i));
  }
  return false;
}

int main() { 
  int n;
  cin >> n;
  vector<int> nums(n);
  for(int i = 0; i < n; ++i) cin >> nums.at(i);
  cout << std::boolalpha << containsDuplicate(nums) << endl;
}