#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int n,count=1,maximum=1;
  cin>>n;
  vector<int>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  for(int i=0;i<n-1;i++){
    if(arr[i+1]>=arr[i]){
      count++;
      maximum=max(maximum,count);
    }
    else{
      count=1;
    }
  }
  cout<<maximum<<endl;
  return 0;
}
