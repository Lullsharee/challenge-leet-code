#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
  int target_column = 0;
  for (int i = 0; i < matrix.size(); i++) {
    if (matrix[i][0] <= target) target_column = i;
  }
  int left = 0, right = matrix[target_column].size() - 1;
  bool ans = false;
  while (left <= right) {
    int mid = (left + right) / 2;
    if (target < matrix[target_column][mid]) {
      right = mid -1;
    } else if (target > matrix[target_column][mid]) {
      left = mid + 1;
    } else {
      ans = true;
      break;
    }
  }
  return ans;
}

int main(){

}