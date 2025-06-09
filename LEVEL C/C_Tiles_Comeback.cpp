#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n,m,countlast=0,countfirst=0,count=0;
    cin>>n>>m;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    for(int i=0;i<n;i++){
      if(arr[i]==arr[n-1]){
        countlast++;
      }
      if(arr[i]==arr[0]){
        countfirst++;
      }
    }
    if(countlast<m){
      cout<<"NO"<<endl;
    }
    else{
      if(arr[0]==arr[n-1]){
        cout<<"YES"<<endl;
      }
      else{
        if(countfirst<m){
          cout<<"NO"<<endl;
        }
        else{
          bool flag=false;
          int j=0;
          int k=m;
          for(int i=0;i<n;i++){
            if(arr[i]==arr[0]){
              k--;
              if(k==0){
                j=i;
                break;
              }
            }
          }
          for(int i=j+1;i<n;i++){
            if(arr[i]==arr[n-1]){
              count++;
              if(count==m){
                flag=true;
                break;
              }
            }
          }
          if(flag){
            cout<<"YES"<<endl;
          }
          else{
            cout<<"NO"<<endl;
          }
        }
      }
    }
  }
  return 0;
}
