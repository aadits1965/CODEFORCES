#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  cout.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int n,m,count=0;
    cin>>n>>m;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    int a=1;
    for(int i=0;i<n;i++){
      if(arr[i]==a){
        count++;
        a++;
      }
    }
    cout<<ceil((n-count)*1.0/m)<<endl;
  }
  return 0;
}