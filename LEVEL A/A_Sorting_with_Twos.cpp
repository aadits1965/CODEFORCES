#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    bool is_sorted = true;
    for (int i = 1; i < n; i++) {
      if (arr[i] < arr[i - 1]) {
        is_sorted = false;
        break;
      }
    }
    if (is_sorted) {
      cout << "YES" << endl;
      continue;
    }
    else{
      vector<int> forbidden_indices;
      for (int i = 0; (1 << i) - 1 < n; i++) { 
        forbidden_indices.push_back((1 << i) - 1);
      }
      bool possible = true;
      for (int i = 0; i < n - 1; i++) {
        if (arr[i + 1] < arr[i] && find(forbidden_indices.begin(), forbidden_indices.end(), i) == forbidden_indices.end()) {
          cout << "NO" << endl;
          possible = false;
          break;
        }
      }
      if (possible) {
        cout << "YES" << endl;
      }
    }
  }
  return 0;
}