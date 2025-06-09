#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int t;
  cin>>t;
  cin.ignore();
  while(t--){
    vector<int>arr(3);
    for(int i=0;i<3;i++){
      cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    if(arr[0]+arr[1]==arr[2]){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
  }
  return 0;
}