#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,count=0;
  cin >> n;
  int arr[n][2];
  for(int i=0;i<n;i++){
    for(int j=0;j<2;j++){
      cin>>arr[i][j];
    }
  }
  for(int i=0;i<n;i++){
    if(arr[i][1]-arr[i][0]>=2){
      count++;
    }
  }
  cout<<count<<endl;
  return 0;
}