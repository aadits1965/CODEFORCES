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
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    vector<pair<int, int>> sorted_arr;
    for(int i=0;i<n;i++){
      sorted_arr.push_back({arr[i],i});
    }
    sort(sorted_arr.rbegin(), sorted_arr.rend(), greater<pair<int, int>>());
    vector<int>result(n);
    for (int i=0;i<n;i++) {
      result[sorted_arr[i].second]=n-i;
    }
    for (int num : result) {
      cout<<num<<" ";
    }
    cout<<endl;
  }
  return 0;
}