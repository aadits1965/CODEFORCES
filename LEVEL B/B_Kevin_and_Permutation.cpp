#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n,k,count1=0;
    cin>>n>>k;
    int j=1;
    for(int i=n;i>0;i--){
      if(i>=j){
        cout<<i<<" ";
        count1++;
        if(count1==k-1 && j!=i){
          cout<<j<<" ";
          j++;
          count1=0;
        }
      }
    }
    cout<<endl;
  }
  return 0;
}