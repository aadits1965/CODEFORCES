#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int n,current=0,max_capacity=0;
  cin>>n;
  int arr[n][2];
  for(int i=0;i<n;i++){
    for(int j=0;j<2;j++){
      cin>>arr[i][j];
    }
  }
  for(int i=0;i<n;i++){
    current+=arr[i][1]-arr[i][0];
    max_capacity=max(current,max_capacity);
  }
  cout<<max_capacity<<endl;
  return 0;
}