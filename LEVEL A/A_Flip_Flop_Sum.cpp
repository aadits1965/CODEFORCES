#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n,sum=0,count1=0;
    cin>>n;
    bool flag=false;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
      sum+=arr[i];
      if(arr[i]==-1){
        count1++;
      }
    }
    for(int i=0;i<n-1;i++){
      if(arr[i]+arr[i+1]==-2){
        flag=true;
        break;
      }
    }
    if(flag){
      cout<<sum+4<<endl;
    }
    else if(count1==0){
      cout<<sum-4<<endl;
    }
    else{
      cout<<sum<<endl;
    }

  }
  return 0;
}