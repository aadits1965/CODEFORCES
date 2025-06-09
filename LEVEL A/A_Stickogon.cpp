#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while (t--){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    unordered_map<int, int> frequency;
    for (int i : arr) {
      frequency[i]++;
    }
    int totalCount = 0;
    for (const auto& pair : frequency) {
      int count = pair.second;
      totalCount += count / 3;
    }
    cout<<totalCount<<endl;
  }
  return 0;
}