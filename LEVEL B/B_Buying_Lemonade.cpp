#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int t;
  cin>>t;
  while(t--){
    long long n,k,cans=0,presses=0,min;
    cin>>n>>k;
    vector<long long>arr(n);
    for(long long i=0;i<n;i++){
      cin>>arr[i];
    }
    if(k<=n){
      cout<<k<<endl;
    }
    else{
      presses = 0;
      cans = 0;
      sort(arr.begin(),arr.end());
      for(long long i=0;i<n;i++){
        if(arr[i]!=0){
          presses+=(n-i)*arr[i];
          cans+=(n-i)*arr[i];
          min=arr[i];
          for (long long i=0;i<n;i++) {
            arr[i]-= min;
          }
          if(cans<k){
            presses++;
          }
          else if(cans==k){
            cout<<presses<<endl;
            break;
          }
          else{
            cout<<presses-(cans-k)<<endl;
            break;
          }
        }
        else{
          presses++;
        }
      }
    }
  }
  return 0;
}