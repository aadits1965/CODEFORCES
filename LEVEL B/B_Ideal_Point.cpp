#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  cout.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int n,k,count=0;
    cin>>n>>k;
    map<int, int> countMap;
    for (int i = 0; i < n; ++i) {
      int start, end;
      cin >> start >> end;
      if(start<=k && k<=end){
        for (int j = start; j <= end; ++j) {
          countMap[j]++;
        }
      }
    }
    int maxCount = 0;
    for (const auto& pair : countMap) {
      if (pair.second > maxCount) {
        maxCount = pair.second;
      }
    }
    for(int i=1;i<=50;i++){
      if(countMap[i]==maxCount){
        count++;
      }
    }
    if(count!=1){
      cout<<"NO"<<endl;
    }
    else{
      cout<<"YES"<<endl;
    }
  }
  return 0;
}