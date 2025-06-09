#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  long long t;
  cin>>t;
  while(t--){
    long long n,count=0;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    while(true){
      for(int i=0;i<n;i++){
        if(arr[i]!=arr[n-i-1]){
          swap(arr[i],arr[n-i-1]);
        }
      }
      for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
          count++;
        }
      }
    }
  }
  return 0;
}