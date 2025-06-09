#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  cout.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int n,ans=0;
    cin>>n;
    string s;
    cin>>s;
    vector<int> left_distinct(n + 1, 0), right_distinct(n + 1, 0);
    unordered_set<char> left_set, right_set;
    for (int i = 0; i < n; ++i) {
      left_set.insert(s[i]);
      left_distinct[i + 1] = left_set.size();
    }
    for (int i = n - 1; i >= 0; --i) {
      right_set.insert(s[i]);
      right_distinct[i] = right_set.size();
    }
    for (int i = 1; i < n; ++i) {
      ans = max(ans, left_distinct[i] + right_distinct[i]);
    }
    cout << ans << endl;
  }
  return 0;
}