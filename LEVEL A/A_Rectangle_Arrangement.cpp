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
    int arr[n][2];
    for(int i=0;i<n;i++){
      for(int j=0;j<2;j++){
        cin>>arr[i][j];
      }
    }
    int maximum1=arr[0][0];
    int maximum2=arr[0][1];
    for(int i=0;i<n;i++){
      if(arr[i][0]>maximum1){
        maximum1=arr[i][0];
      }
      if(arr[i][1]>maximum2){
        maximum2=arr[i][1];
      }
    }
    cout<<(maximum1+maximum2)*2<<endl;
  }
  return 0;
}