#include <bits/stdc++.h>
using namespace std;

int sum(int n) {
  if (n == 0) { 
    return 0;
  }
  int s = sum(n - 1);
  return s + n;
}


