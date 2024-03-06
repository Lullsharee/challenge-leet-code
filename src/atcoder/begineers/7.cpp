#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
  int N;
  vector<int> d(101);
  cin >> N;
  for (int i = 0; i < N; ++i) cin >> d.at(i);
  set<int> values;
  for (int i = 0; i < N; ++i) {
    values.insert(d.at(i));
  }
  cout << values.size() << endl;
}