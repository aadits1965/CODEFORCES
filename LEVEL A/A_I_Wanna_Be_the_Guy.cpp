#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int n;
  cin>>n;
  int p;
  cin>>p;
  vector<int>arr1(p);
  for(int i=0;i<p;i++){
    cin>>arr1[i];
  }
  int q;
  cin>>q;
  vector<int>arr2(q);
  for(int i=0;i<q;i++){
    cin>>arr2[i];
  
  }
  vector<int> combined = arr1;
  combined.insert(combined.end(), arr2.begin(), arr2.end()); 
  unordered_set<int>unique(combined.begin(),combined.end());
  if(unique.size()<n){
    cout<<"Oh, my keyboard!"<<endl;
  }
  else{
    cout<<"I become the guy."<<endl;
  }
  return 0;
}