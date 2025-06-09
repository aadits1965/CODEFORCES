#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int n,h,count=0;
  cin>>n>>h;
  vector<int>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  for(int i=0;i<n;i++){
    if(arr[i]>h){
      count++;
    }
  }
  cout<<n+count<<endl;
  return 0;
}