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
    vector<int>ans;
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    for(int i=1;i<n;i++){
      if(arr[i]>=arr[i-1]){
        ans.push_back(arr[i]);
      }
      else{
        ans.push_back(arr[i]);
        ans.push_back(arr[i]);
      }
    }
    cout<<ans.size()+1<<endl;
    cout<<arr[0]<<" ";
    for(int i : ans){
      cout<<i<<" ";
    }
    cout<<endl;
  }
  return 0;
}