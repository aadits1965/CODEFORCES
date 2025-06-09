#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int t;
  cin>>t;
  cin.ignore();
  while(t--){
    int n;
    cin>>n;
    vector<int>arr(n);
    arr[0]=3;
    for(int i=2;i<n;i+=2){
      arr[i]=arr[i-2]+3;
    }
    arr[1]=4;
    for(int i=3;i<n;i+=2){
      arr[i]=arr[i-2]+3;
    }
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
  }
  return 0;
}