#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    vector<int> xs(n), ys(n);
    for (int i = 0; i < n; i++) cin >> xs[i] >> ys[i];
    vector<int> sorted_x = xs;
    vector<int> sorted_y = ys;
    sort(sorted_x.begin(), sorted_x.end());
    sort(sorted_y.begin(), sorted_y.end());
    int min_x = sorted_x[0], max_x = sorted_x[n-1];
    int min_y = sorted_y[0], max_y = sorted_y[n-1];
    int freq_min_x = count(xs.begin(), xs.end(), min_x);
    int freq_max_x = count(xs.begin(), xs.end(), max_x);
    int freq_min_y = count(ys.begin(), ys.end(), min_y);
    int freq_max_y = count(ys.begin(), ys.end(), max_y);
    ll base_area = (ll)(max_x - min_x + 1) * (max_y - min_y + 1);
    ll ans = base_area;
    auto second_min_x = (n > 1) ? sorted_x[1] : min_x;
    auto second_max_x = (n > 1) ? sorted_x[n-2] : max_x;
    auto second_min_y = (n > 1) ? sorted_y[1] : min_y;
    auto second_max_y = (n > 1) ? sorted_y[n-2] : max_y;
    if (freq_min_x == 1) {
      ll area = (ll)(max_x - second_min_x + 1) * (max_y - min_y + 1);
      ans = min(ans, area);
    }
    if (freq_max_x == 1) {
      ll area = (ll)(second_max_x - min_x + 1) * (max_y - min_y + 1);
      ans = min(ans, area);
    }
    if (freq_min_y == 1) {
      ll area = (ll)(max_x - min_x + 1) * (max_y - second_min_y + 1);
      ans = min(ans, area);
    }
    if (freq_max_y == 1) {
      ll area = (ll)(max_x - min_x + 1) * (second_max_y - min_y + 1);
      ans = min(ans, area);
    }
    if(ans<n){
      ans++;
    }
    cout << ans << '\n';
  }
  return 0;
}
