#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int n,m,sum=0;
  cin>>n>>m;
  vector<int>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  sort(arr.begin(),arr.end());
  for(int i=0;i<m;i++){
    if(arr[i]<0){
      sum+=arr[i];
    }
  }
  cout<<-sum<<endl;
  return 0;
}