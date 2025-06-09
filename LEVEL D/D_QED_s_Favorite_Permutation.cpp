#include <bits/stdc++.h>
using namespace std;

bool isSorted(const vector<int>& arr) {
  for (int i = 1; i < arr.size(); i++) {
    if (arr[i] < arr[i - 1]) {
      return false;
    }
  }
  return true;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while (t--) {
    int n, q;
    cin >> n >> q;
    vector<int>arr(n);
    vector<int>lr(q);
    for (int i=0;i<n;i++){
      cin >>arr[i];
    }
    string s;
    cin >> s;
    for (int i=0;i<q;i++){
      cin >>lr[i];
    }
    for (int i = 0; i < q; i++) {
      int query_index = lr[i] - 1;
      if (query_index >= 0 && query_index < n) {
        s[query_index] = (s[query_index] == 'R') ? 'L' : 'R';
      }
      for(int i=0;i<n;i++){
        if(arr[i]!=i+1 && s[i]){

        }
      }
    }
  }
  return 0;
}
