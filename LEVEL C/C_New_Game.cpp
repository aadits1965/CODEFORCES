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
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    unordered_map<int,int>frequency;
    for(int i=0;i<n;i++){
      frequency[arr[i]]++;
    }
    vector<int>unique;
    for(const auto& i : frequency){
      unique.push_back(i.first);
    }
    sort(unique.begin(),unique.end());
    int maximum=0;
    for(int open=0;open<unique.size();open++){
      int current=0;
      int distinct=0;
      for(int close=open;close<unique.size();close++){
        if(distinct<k){
          if(close==open || unique[close]==unique[close-1] || unique[close]==unique[close-1]+1){
            current+=frequency[unique[close]];
            distinct++;
          } 
          else{
            break;
          }
        } 
        else{
          break;
        }
        maximum=max(maximum,current);
      }
    }
    cout<<maximum<<endl;
  }
  return 0;
}









