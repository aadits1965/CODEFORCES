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
    int k=1,answer=INT_MAX;
    for(int i=0;i<n;i++){
      k=arr[i][0]+(arr[i][1]-1)/2;
      answer=min(answer,k);
    }
    cout<<answer<<endl;
  }
  return 0;
}
  