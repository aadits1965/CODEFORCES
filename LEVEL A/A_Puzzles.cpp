#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int n,m,i=0;
  cin>>n>>m;
  vector<int>arr(m);
  for(int i=0;i<m;i++){
    cin>>arr[i];
  }
  sort(arr.begin(),arr.end());
  int minimum=arr[n-1]-arr[0];
  while(n-1+i<m){
    int diff=0;
    diff=arr[n-1+i]-arr[i];
    minimum=min(diff,minimum);
    i++;
  }
  cout<<minimum<<endl;
  return 0;
}