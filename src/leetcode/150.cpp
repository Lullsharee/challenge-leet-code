#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <string>
using namespace std;

int evalRPN(vector<string>& tokens) {
    std::stack<int> token_stacks;
    vector<string> operators = {"+", "-", "*", "/"};
    for (int i = 0; i < tokens.size(); i++) {
      auto it = find(operators.begin(), operators.end(), tokens.at(i));
      if (it == operators.end()){
        token_stacks.push(stoi(tokens.at(i)));
      } else if (tokens.at(i) == "+") {
        int first = token_stacks.top();
        token_stacks.pop();
        int second = token_stacks.top();
        token_stacks.pop();
        token_stacks.push(second + first);
      } else if (tokens.at(i) == "-") {
        int first = token_stacks.top();
        token_stacks.pop();
        int second = token_stacks.top();
        token_stacks.pop();
        token_stacks.push(second - first);
      }  else if (tokens.at(i) == "*") {
        int first = token_stacks.top();
        token_stacks.pop();
        int second = token_stacks.top();
        token_stacks.pop();
        token_stacks.push(second * first);
      } else if (tokens.at(i) == "/") {
        int first = token_stacks.top();
        token_stacks.pop();
        int second = token_stacks.top();
        token_stacks.pop();
        token_stacks.push(second / first);
      }
    }
    int ans = token_stacks.top();
    return ans;
}

int main() {
  int N;
  cin >> N;
  vector<string> strings(N);
  for (int i = 0; i < N; i++) cin >> strings.at(i);
  int ans = evalRPN(strings);
  cout << ans << endl;
}