#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> dailyTemperatures(vector<int>& temperatures) {
    stack<int> stack;
    vector<int> ans(temperatures.size(), 0);
    for (int i = 0; i < temperatures.size(); i++) {
      while (!stack.empty() && temperatures.at(stack.top()) < temperatures.at(i)) {
        ans[stack.top()] = i - stack.top();
        stack.pop();
      }
      stack.push(i);
    }
    return ans;
}

int main() {

  int N;
  cin >> N;
  vector<int> tempertures(N);
  for (int i = 0; i < N; i++) cin >> tempertures.at(i);
  vector<int> ans = dailyTemperatures(tempertures);
  for (int i = 0; i < N; i++) {
    if (i > 0) {
      cout << ",";
    }
    cout << ans.at(i);
  }
  cout << endl;
}
