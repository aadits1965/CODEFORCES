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
    unordered_set<int>ans(arr.begin(),arr.end());
    unordered_map<int, int> frequency;
    for (int num : arr) {
      frequency[num]++;
    }
    int max_freq = 0;
    for (const auto& pair : frequency) {
      max_freq = max(max_freq, pair.second);
    }
    if(ans.size()>2){
      cout<<"NO"<<endl;
    }
    else if(ans.size()==1){
      cout<<"YES"<<endl;
    }
    else{
      if(n%2==0){
        if(max_freq==n/2){
        cout<<"YES"<<endl;
        }
        else{
        cout<<"NO"<<endl;
        }
      }
      else{
        if(max_freq==n/2+1){
          cout<<"YES"<<endl;
        }
        else{
          cout<<"NO"<<endl;
        }
      }
    }
  }
  return 0;
}