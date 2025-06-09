#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long n,x;
    cin>>n>>x;
    vector<long long>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int mex=0;
    while(true){
      for(int i=0;i<n;i++){
        if(arr[i]==mex){
          break;
        }
        else if(arr[i]>mex){
          break;
        }
      mex++;
    }
  }
  return 0;
}