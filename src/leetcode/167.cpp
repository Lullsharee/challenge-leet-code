#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    vector<int> result(2);
    int left = 0, right = numbers.size() - 1;

    if (numbers.size() < 2) return result;
    while(left < right) {
      int sum = numbers[left] + numbers[right];
      if (sum == target) {
        result.at(0) = left+1;
        result.at(1) = right+1;
        break;
      } else if (sum < target) {
        left++;
      } else {
        right--;
      }
    }
    return result;
}

int main() {
  int N, target;
  cin >> N;
  vector<int> inputs(N);
  for (int i = 0; i < N; i++) cin >> inputs.at(i);
  cin >> target;
  vector<int> ans = twoSum(inputs, target);
  cout << "[" << ans.at(0) << "," << ans.at(1) << "]" << endl;
}