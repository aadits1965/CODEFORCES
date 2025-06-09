#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); 
  cout.tie(nullptr); 
  int t,s,count=0;
  cin>>t>>s;
  int arr[t];
  for(int i=0;i<t;i++){
    cin>>arr[i];
  }
  for (int i = 0; i < t - 1; i++) {
    if (arr[i + 1] <= arr[i]) {
      int needed = arr[i] - arr[i + 1] + 1;
      int increments = ceil(needed*1.0/s); 
      arr[i + 1] += increments * s;  
      count += increments;
    }
  }
  cout<<count<<endl;
  return 0;
}