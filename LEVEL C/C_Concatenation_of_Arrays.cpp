#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  long long t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<pair<int, int>> arrays(n);
    for (int i = 0; i < n; i++) {
      cin >> arrays[i].first >> arrays[i].second;
    }
    sort(arrays.begin(), arrays.end());
    vector<int> resultant;
    for (const auto& p : arrays) {
      resultant.push_back(p.first);
      resultant.push_back(p.second);
    }
    for (int num : resultant) {
      cout << num << " ";
    }
    cout <<endl;
  }
  return 0;
}
