#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxArea(vector<int>& height) {
  int ans = 0;

  int left = 0, right = height.size() - 1;
  while (left != right) {
    int current_area = min(height[left], height[right]) * (right - left);
    if (current_area > ans) ans = current_area;
    if (height[left] < height[right]) {
      left++;
    } else {
      right--;
    }
  }
  return ans;
}

int main() {
  int N;
  cin >> N;
  vector<int> heights(N);
  for (int i = 0; i < N; i++) cin >> heights.at(i);
  int ans = maxArea(heights);
}