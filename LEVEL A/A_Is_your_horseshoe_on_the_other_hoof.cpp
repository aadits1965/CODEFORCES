#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  vector<int>arr(4);
  for(int i=0;i<4;i++){
    cin>>arr[i];
  }
  unordered_set<int>unique(arr.begin(),arr.end());
  cout<<4-unique.size()<<endl;
  return 0;
}

