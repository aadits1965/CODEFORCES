#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  cout.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    vector<char>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    map<char, int> frequency;
    for (char c : arr) {
      frequency[c]++; 
    }
    int oddCount = 0;
    for (const auto& pair : frequency) {
      if (pair.second % 2 != 0) {
        oddCount++;
      }
    }
    if(oddCount-k==1 || oddCount-k==0){
      cout<<"YES"<<endl;
    }
    else if(oddCount-k>1){
      cout<<"NO"<<endl;
    }
    else{
      cout<<"YES"<<endl;
    }
  }
  return 0;
}
