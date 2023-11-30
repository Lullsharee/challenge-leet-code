#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> an(N);
  for (int i = 0; i < N; ++i) cin >> an[i];
  sort(an.begin(), an.end());
  cout << an[N-1] - an[0]; 
}