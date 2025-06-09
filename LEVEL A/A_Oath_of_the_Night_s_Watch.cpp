#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int t,count1=1,count2=1;
  cin>>t;
  vector<int>arr(t);
  for(int i=0;i<t;i++){
    cin>>arr[i];
  }
  sort(arr.begin(),arr.end());
  for(int i=1;i<t;i++){
    if(arr[i]==arr[0]){
      count1++;
    }
  }
  for(int i=t-2;i>=0;i--){
    if(arr[i]==arr[t-1]){
      count2++;
    }
  }
  if(t==1){
    cout<<"0"<<endl;
  }
  else{
    cout<<max(0,t-count1-count2)<<endl;
  }
  return 0;
}