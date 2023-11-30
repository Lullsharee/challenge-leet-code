#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> an(N);
  for (int i = 0; i < N; ++i) { 
    cin >> an[i];
    an[i] -= (i+1);
  }
  sort(an.begin(), an.end());
  
  int b;
  if (N % 2 == 0) b = (an[N/2 - 1] + an[N/2]) /2;
  else b = an[N/2];

  long long ans = 0;
  for (int i = 0; i < N; ++i) {
    ans += abs(an[i] - b);
  }
  cout << ans << endl;
}