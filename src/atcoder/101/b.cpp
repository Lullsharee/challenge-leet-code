#include <iostream>
#include <vector>

using namespace std;

int main(){
  int n;
  cin >> n;
  int ans = 0;
  int cp = n;

  while (n > 0) {
    ans += n % 10;
    n /= 10;
  }
  string out = (cp % ans == 0) ? "Yes" : "No";
  cout << out << endl;
}