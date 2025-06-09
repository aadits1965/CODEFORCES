#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n,q;
    cin>>n>>q;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    sort(arr.rbegin(),arr.rend());
    vector<int>precomputed_sum(n+1,0);
    for(int i=0;i<n;i++){
      precomputed_sum[i+1]=precomputed_sum[i]+arr[i];
    }
    while(q--){
      int a;
      cin>>a;
      if(precomputed_sum[n]<a){
        cout<<"-1"<<endl;
      }
      else{
        auto it = lower_bound(precomputed_sum.begin(), precomputed_sum.end(), a);
        cout << (it - precomputed_sum.begin()) << endl;
      }
    }
  }
  return 0;
}