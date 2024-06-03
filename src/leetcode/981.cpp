#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;


class TimeMap {
  public:
    unordered_map<string, vector<pair<int, string>>> m;
    TimeMap() {
      m.clear();
    }

    void set(string key, string value, int timestamp) {
      m[key].push_back({timestamp, value});
    }

    string get(string key, int timestamp) {
      string ans = "";
      vector<pair<int, string>>& cur = m[key];
      int left = 0;
      int right = cur.size() - 1;
      while (left <= right) {
        int mid = left + (right - left) / 2;
        if(cur[mid].first <= timestamp) {
          ans = cur[mid].second;
          left = mid + 1;
        } else {
          right = mid - 1;
        }
      }
      return ans;
    }
};

int main() {
  cout << 1 << endl;
}