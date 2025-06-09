#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while (t--){
    int n,m;
    cin>>n>>m;
    int arr[n][m],arr2[n][m];
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        cin>>arr[i][j];
      }
    }
    if(n==1 && m==1){
      cout<<"-1"<<endl;
      continue;
    }
    else if(m>1){
      for(int i=0;i<n;i++){
        for(int j=0;j<m-1;j++){
          arr2[i][j+1]=arr[i][j];
        }
        arr2[i][0]=arr[i][m-1];
      }
    }
    else{
      for(int i=0;i<n;i++){
        arr2[(i+1)][0]=arr[i][0];
      }
      arr2[0][0]=arr[n-1][0];
    }
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        cout<<arr2[i][j]<<" ";
      }
      cout<<endl;
    }
  }
  return 0;
}