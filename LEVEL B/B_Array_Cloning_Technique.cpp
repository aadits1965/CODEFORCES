#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  cout.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int n, count = 0;
    cin >> n;
    vector<int> arr(n);
    map<int, int> frequency;
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      frequency[arr[i]]++;
    }
    int maxFrequency = 0;
    for (const auto& pair : frequency) {
      maxFrequency = max(maxFrequency, pair.second);
    }
    int answer = 0;
    while (maxFrequency< n) {
      int a = min(n - maxFrequency, maxFrequency);
      answer += 1 + a;
      maxFrequency += a;
    }
    cout << answer <<'\n';
  }
  return 0;
}