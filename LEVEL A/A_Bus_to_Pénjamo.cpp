#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while (t--){
    int n,r,count=0;
    cin>>n>>r;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    sort(arr.rbegin(),arr.rend());
    int happy=0,rows=0;
    for(int i=0;i<n ;i++){
      if(arr[i]>=2 && arr[i]%2==1){
        happy+=arr[i]-1;
        rows+=arr[i]/2;
        arr[i]=1;
        count++;
      }
      else if(arr[i]>=2 && arr[i]%2==0){
        happy+=arr[i];
        rows+=arr[i]/2;
        arr[i]=0;
      }
      else{
        count++;
      }
    }
    if(count<=r-rows){
      happy+=count;
    }
    else{
      happy+=2*r-2*rows-count;
    }
    cout<<happy<<endl;
  }
  return 0;
}