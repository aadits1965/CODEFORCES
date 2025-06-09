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
    vector<int>arr1(n);
    vector<int>arr2(n);
    for(int i=0;i<n;i++){
      cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
      cin>>arr2[i];
    }
    vector<pair<int, int>> paired(n);
    for (int i = 0; i < n; i++) {
      paired[i] = {arr1[i], arr2[i]};
    }
    sort(paired.begin(), paired.end());
    for (int i = 0; i < n; i++) {
      arr1[i] = paired[i].first;
      arr2[i] = paired[i].second;
    }
    for(int i=0;i<n;i++){
      cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
      cout<<arr2[i]<<" ";
    }
    cout<<endl;
  }
  return 0;
}