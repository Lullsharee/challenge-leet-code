#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool isAnagram(string s, string t) {
    if (s.size() != t.size()) return false;
    unordered_map<char, int> s_map;
    unordered_map<char, int> t_map;
    for (int i = 0; i < s.size(); ++i) {
      s_map[s.at(i)]++;
      t_map[t.at(i)]++;
    }

    for (int i = 0; i <= s_map.size(); ++i) {
      if (s_map[i] != t_map[i]) return false;
    }
    return true;
}

int main() {
  string s, t;
  cin >> s >> t;
  cout << std::boolalpha << isAnagram(s, t) << endl;
}