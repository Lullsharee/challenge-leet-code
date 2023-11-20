#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
  double N,K;
  cin >> N >> K;
  // vector<int> an(N);
  // for (int i = 0; i < N; ++i) cin >> an[i];
  cout << ceil((N-1)/(K-1));
}