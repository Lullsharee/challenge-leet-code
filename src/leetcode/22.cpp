#include <iostream>
#include <vector>
using namespace std;

void solver(int left, int right, string path, vector<string>& ans) {
  if (left > right || left < 0 || right <0) {
    return ;
  }
  if (left == 0 && right == 0) {
    ans.push_back(path);
    return;
  }
  solver(left - 1, right, path + '(', ans);
  solver(left, right - 1, path+ ')', ans);
}

vector<string> generateParenthesis(int n) {
  vector<string> ans;
  solver(n, n, "", ans);
  return ans;
}



int main() {
  int N;
  cin >> N;
  vector<string> ans = generateParenthesis(N);
  for (const auto& str : ans) {
    cout << str << endl;
  }
  return 0;
}

