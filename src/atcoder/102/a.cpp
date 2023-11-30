#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N;
  cin >> N;
  if (N % 2 == 0) cout << N;
  else cout << N * 2;
}