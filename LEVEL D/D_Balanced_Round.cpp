#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  long long t;
  cin>>t;
  while(t--){
    long long n,k,count=1,maximum=1;
    cin>>n>>k;
    vector<long long>arr(n);
    for (long long i = 0; i < n; i++) {
      cin >> arr[i];
    }
    sort(arr.begin(),arr.end());
    for(long long i=0;i<n-1;i++){
      if(arr[i+1]-arr[i]<=k){
        count++;
        maximum=max(count,maximum);
      }
      else{
        count=1;
        continue;
      }
    }
    cout<<n-maximum<<endl;
  }
  return 0;
}
