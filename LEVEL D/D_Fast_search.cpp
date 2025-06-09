#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int t;
    cin>>t;
    while(t--){
      int x,y;
      cin>>x>>y;
      int l1=-1;
      int r1=n;
      while(r1>l1+1){
        int m=(l1+r1)/2;
        if(arr[m]<=x-1){
          l1=m;
        }
        else{
          r1=m;
        }
      }
      int a1=l1+1;
      int l2=-1;
      int r2=n;
      while(r2>l2+1){
        int m=(l2+r2)/2;
        if(arr[m]<y+1){
          l2=m;
        }
        else{
          r2=m;
        }
      }
      int a2=r2+1;
      cout<<a2-a1-1<<" ";
    }
    return 0;
}