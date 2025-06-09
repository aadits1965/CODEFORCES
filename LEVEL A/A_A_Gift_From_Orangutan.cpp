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
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    int maximum=arr[0];
    int minimum=arr[0];
    for(int i=0;i<n-1;i++){
      if(arr[i+1]>maximum){
        maximum=arr[i+1];
      }
      if(arr[i+1]<minimum){
        minimum=arr[i+1];
      }
    }
    cout<<(n-1)*(maximum-minimum)<<endl;
  }
  return 0;
}