#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int t;
  cin>>t;
  while(t--){
    long long n,count=0;
    cin>>n;
    vector<int>arr(n);
    for (int i = 0; i < n; i++){
      cin>>arr[i];
    }
    sort(arr.rbegin(),arr.rend());
    for (int i = 0; i < n-1; i++){
      count+=arr[i]-arr[i+1];
    }
    cout<<count<<endl;
  }
  return 0;
}

    