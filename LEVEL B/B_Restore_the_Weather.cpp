#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    vector<int>arr1(n);
    vector<int>arr2(n);
    for(int i=0;i<n;i++){
      cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
      cin>>arr2[i];
    }
    vector<pair<int, int>> indexedArr1(n);
    for (int i = 0; i < n; ++i) {
      indexedArr1[i] = {arr1[i], i+1};
    }
    sort(indexedArr1.begin(), indexedArr1.end());
    vector<int> sortedIndexes1(n);
    for (int i = 0; i < n; ++i) {
      sortedIndexes1[i] = indexedArr1[i].second; 
    }
    sort(arr2.begin(),arr2.end());
    vector<int>answer(n);
    for (int i = 0; i < n; ++i) {
      answer[sortedIndexes1[i]-1]=arr2[i];
    }
    for(int i=0;i<n;i++){
      cout<<answer[i]<<" ";
    }
    cout<<endl;
  }
  return 0;
}