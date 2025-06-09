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
    int count=0;
    cin>>n>>m;
    int range1=int(log2(n));
    for (int i = 1 << range1; i <= 1 << (range1+1) && i<=m; i++) {
      if (n == i) {
        continue; 
      }
      else{
        int ans = n^i;
        if (n%ans==0 || i%ans==0) {
          count++;
        }
      }
    }
    cout << count << endl;
  }
  return 0;
}