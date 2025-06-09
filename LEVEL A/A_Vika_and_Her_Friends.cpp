#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); 
  cout.tie(nullptr); 
  int t;
  cin>>t;
  while(t--){
    int n,m,k,count=0;
    cin>>n>>m>>k;
    int x,y;
    cin>>x>>y;
    int arr[k][2];
    for(int i=0;i<k;i++){
      for(int j=0;j<2;j++){
        cin>>arr[i][j];
      }
    }
    for(int i=0;i<k;i++){
      if((x+y)%2==(arr[i][0]+arr[i][1])%2){
        count++;
      }
    }
    if(count==0){
    cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
  }
  return 0;
}