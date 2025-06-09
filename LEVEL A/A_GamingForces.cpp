#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n,count=0;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
      if(arr[i]==1){
        count++;
      }
    }
    if(count%2==0){
      cout<<n-(count)+count/2<<endl;
    }
    else{
      cout<<n-(count)+count/2+1<<endl;
    }
    
  }
  return 0;
}