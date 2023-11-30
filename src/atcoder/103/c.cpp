#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int N;

int main() {
  cin >> N;
  vector<int> AN(N);
  for (int i = 0; i < N; ++i) cin >> AN[i];
  
  long long ans = 0;
  for (int i =0; i < N; ++i) ans += AN[i] - 1;  

  // long long m = lcm(AN[0], AN[1]);
  
  // for (int i = 2; i < N; ++i) {
  //   m = lcm(m, AN[i]);
  // }
  // m -= 1;
  // long long ans = 0;
  // for (int i = 0; i < N; ++i) {
  //   ans += m % AN[i];
  // }
  cout << ans << endl;
}

int gcd(int a, int b) {
  while( b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}

int lcm(int a, int b) {
  if (a == 0 || b == 0) {
    return 0;
  }
  return (a * b) / gcd(a, b);
}
