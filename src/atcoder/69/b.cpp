#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  int length = s.size();
  cout << s[0] << length - 2 << s[length -1] << endl;  
}