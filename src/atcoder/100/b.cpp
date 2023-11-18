#include <iostream>
#include <vector>

using namespace std;


int main() {
  int D,N;
  cin >> D >> N;
  if (N == 100) N += 1;
  if (D == 0) cout << N;
  if (D == 1) cout << N * 100;
  if (D == 2) cout << N * 100 * 100;
}