#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); 
  cout.tie(nullptr); 
  int t;
  cin>>t;
  while(t--){
    long long n,m;
    long long count=0;
    cin>>n>>m;
    for (long long i = 1 ; i <= m; i++) {
      long long ans = n^i;
      if (ans%n==0 || ans%i==0) {
        count++;
      }
    }
    cout << count << endl;
  }
  return 0;
}