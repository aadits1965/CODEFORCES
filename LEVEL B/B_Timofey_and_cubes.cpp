#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int t;
  cin>>t;
  vector<int>arr(t);
  for(int i=0;i<t;i++){
    cin>>arr[i];
  }
  for(int i=0;i<t/2;i++){
    if((i+1)%2!=0){
      swap(arr[i],arr[t-1-i]);
    }
  }
  for(int i=0;i<t;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  return 0;
}