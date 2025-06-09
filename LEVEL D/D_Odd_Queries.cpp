#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  long long t;
  cin>>t;
  while(t--){
    long long n,q,l,r,k;
    cin>>n>>q;
    vector<long long>arr(n);
    vector<long long> prefixSum(n + 1, 0);
    for(long long i=0;i<n;i++){
      cin>>arr[i];
      prefixSum[i + 1] = prefixSum[i] + arr[i];
    }
    long long totalSum = prefixSum[n];
    for(long long i = 0; i < q; i++){
      cin>>l>>r>>k;
      long long rangeSum = prefixSum[r] - prefixSum[l - 1];
      long long newSum = totalSum - rangeSum + (r - l + 1) * k;
      if (newSum % 2 == 0) {
        cout << "NO" << endl;
      } 
      else {
        cout << "YES" << endl;
        }
    }
  }
  return 0;
}