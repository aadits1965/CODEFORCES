#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int n;
  cin>>n;
  vector<int>arr(n);
  vector<int>gifts(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(i==arr[j]-1){
        gifts[i]=j+1;
      }
    }
  }
  for(int i : gifts){
    cout<<i<<" ";
  }
  cout<<endl;
  return 0;
}