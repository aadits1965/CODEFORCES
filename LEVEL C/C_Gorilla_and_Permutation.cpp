#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  long long t;
  cin>>t;
  while(t--){
    long long n,m,k;
    cin>>n>>m>>k;
    for(int i=1;i<n-m+1;i++){
      cout<<n+1-i<<" ";
    }
    for(int i=1;i<=m;i++){
      cout<<i<<" ";
    }
    cout<<endl;
  }
  return 0;
}