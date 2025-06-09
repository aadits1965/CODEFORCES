#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  int a[t];
  int b[t];
  for(int i=0;i<t;i++){
    cin>>a[i];
  }
  for(int i=0;i<t;i++){
    cin>>b[i];
  }
  for(int i=0;i<t;i++){
    long long C[a[i],b[i]];
    for(int n=0;n<a[i];n++){ 
      C[n][0] = 1;
      C[n][n] = 1;
      for(int k=1;k<n;k++){
        C[n][k] = C[n][k - 1] + C[n - 1][k - 1];
      }
    }
  }
  return 0;
}
