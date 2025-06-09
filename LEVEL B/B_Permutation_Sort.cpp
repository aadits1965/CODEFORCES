#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  cout.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int n,count=0;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      if(arr[i]==i+1){
        count++;
      }
    }
    if(count!=n){
      if(arr[0]==1 || arr[n-1]==n){
        cout<<"1"<<endl;
      }
      else if(arr[0]==n && arr[n-1]==1){
        cout<<"3"<<endl;
      }
      else{
        cout<<"2"<<endl;
      }
    }
    else{
      cout<<"0"<<endl;
    }
  }
  return 0;
}