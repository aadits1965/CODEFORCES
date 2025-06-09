#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    long long a=1e9;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    for(int i=0;i<n;i++){
      long long count=i;
      for(int j=i+1;j<n;j++){
        if(arr[j]>arr[i]){
          count++;
        }
      }
      a=min(a,count);
    }
    cout<<a<<endl;
  }
  return 0;
}