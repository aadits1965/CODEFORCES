#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int t;
  cin>>t;
  while(t--){
    int n,count=0;
    cin>>n;
    for (int x = 0; 2020 * x <= n; x++) {
      if ((n - 2020 * x) % 2021 == 0) {
        count++;
        break;
      }
    }
    if(count>0){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
  }
  return 0;
}