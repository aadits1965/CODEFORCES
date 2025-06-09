#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  cout.tie(nullptr);
  int s,n,count=0;
  cin>>s>>n;
  vector<pair<int, int>> pairs;
  for (int i = 0; i < n; ++i) {
    int first, second;
    cin >> first >> second;
    pairs.push_back(make_pair(first, second)); 
  }
  sort(pairs.begin(), pairs.end());
  for (const auto& p : pairs) {
    if(s>p.first){
      s+=p.second;
      count++;
    }
    else{
      cout<<"NO"<<endl;
      break;
    }
  }
  if(count==n){
    cout<<"YES"<<endl;
  }
  return 0;
}