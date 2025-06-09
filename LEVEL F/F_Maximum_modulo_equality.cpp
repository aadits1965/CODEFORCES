#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, q;
    cin >> n >> q;
    if(n==1){
      cout<<"0"<<endl;
    }
    else{
      vector<int> arr(n);
      for (int i = 0; i < n; ++i) {
        cin >> arr[i];
      }
      vector<int> diff(n - 1);
      for (int i = 0; i < n - 1; ++i) {
        diff[i] = abs(arr[i + 1] - arr[i]);
      }
      vector<int> prefixGCD(n-1);
      prefixGCD[0] = diff[0];
      for (int i = 1; i < n - 1; ++i) {
        prefixGCD[i] = __gcd(prefixGCD[i - 1], diff[i]);
      }
      while (q--) {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        if (l == r) {
          cout<<"0 ";
        }   
        else {
          int rangeGCD = diff[l];
          for (int i = l + 1; i < r; ++i) {
            rangeGCD = __gcd(rangeGCD, diff[i]);
          }
          cout << rangeGCD<<" ";
        }
      }
      cout<<endl;
    }
  }
  return 0;
}

