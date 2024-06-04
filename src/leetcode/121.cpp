#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;


int maxProfit(vector<int>& prices) {
  int buy_price = prices[0];
  int profit = 0;
  for (int i = 1; i < prices.size(); i++) {
    if (buy_price >  prices[i]) {
      buy_price = prices[i];
    } else if (profit < prices[i] - buy_price) {
      profit = prices[i] - buy_price;
    }
  }
  return profit;
}

int main() {
  int N;
  cin >> N;
  vector<int> prices(N);
  for (int i = 0; i < N; i++) cin >> prices.at(i);
  int ans = maxProfit(prices);
  cout << ans << endl;
}