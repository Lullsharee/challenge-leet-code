#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
  unordered_map<string, vector<string>> map;
  for (int i = 0; i < strs.size(); ++i) {
    string str = strs.at(i);
    sort(str.begin(), str.end());
    map[str].push_back(strs.at(i));
  }
  vector<vector<string>> result;
  for(auto it = map.begin(); it != map.end(); it++) {
    result.push_back(it->second);
  }
  return result;
}

int main() {
  int n;
  vector<string> strs(6);
  cin >> n;
  for( int i = 0; i < n; ++i) cin >> strs.at(i);
    for (const auto& row : groupAnagrams(strs)) {
        for (const auto& element : row) {
            std::cout << element << " ";
        }
        std::cout << std::endl; // 行を終了
    }
}