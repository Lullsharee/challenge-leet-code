#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <unordered_map>
using namespace std;

bool isValid(string s) {
  std::stack<char> operator_stack;
  unordered_map<char, char> map = {{'}','{'}, {']' ,'['} ,{')', '('}};
  for (int i = 0; i < s.length(); i++) {
    auto it = find_if(map.begin(), map.end(), [&](const auto& pair) {
        return pair.second == s.at(i);
    });
    if (it != map.end()) { 
      operator_stack.push(s.at(i));
    } else if ((!operator_stack.empty() && operator_stack.top() == map[s.at(i)])) {
      operator_stack.pop();
    } else {
      return false;
    } 
  }

  return operator_stack.empty();
}

int main() {
  string S;
  cin >> S;
  bool ans = isValid(S);
  cout << std::boolalpha << ans << endl;
}