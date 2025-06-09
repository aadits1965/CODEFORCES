#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int t;
  cin>>t;
  while(t--){
    int n,m,k,H,count=0;
    cin>>n>>m>>k>>H;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    for(int i=0;i<n;i++){
      for(int j=1;j<m;j++){
        if(abs(H-arr[i])==j*k){
          count++;
          break;
        }
      }
    }
    cout<<count<<endl;
  }
  return 0;
}