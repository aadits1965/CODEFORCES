#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); 
  cout.tie(nullptr); 
  int t;
  cin>>t;
  string s;
  cin>>s;
  vector<string>arr;
  for(int i=0;i<t-1;i++){
    arr.push_back(s.substr(i, 2));
  }
  unordered_map<string, int> freq_map;
  for (int i=0;i<t-1;i++) {
    freq_map[arr[i]]++;
  }
  int max_freq = 0;
  for (const auto& entry : freq_map) {
    max_freq = max(max_freq, entry.second);
  }
  for (const auto& entry : freq_map) {
    if (entry.second == max_freq) {
      cout << entry.first << " ";
      break;
    }
  }
  return 0;
}