#include<bits/stdc++.h>
using namespace std;

bool checkKValue(int n,int k){
  if(n%2==0){
    int k_start=n*(n-1)/2;
    if(k==k_start){
      return true;
    }
    int i=0;
    while(n-(2*i+1)>=0){
      k_start-=(n-(2*i+1));
      if(k==k_start){
        return true;
      }
      i++;
    }
    return false;
  }
  else{
    int k_start=n*(n-1)/2;
    if(k==k_start){
      return true;
    }
    int i=0;
    while(n-(2*i)>=0){
      k_start-=(n-(2*i+1));
      if(k==k_start){
        return true;
      }
    i++;
    }
    return false;
  }
}
int main(){
  int t;
  cin >> t;
  while (t--){
    int n,k;
    cin>>n>>k;
    int m=(1.0*n/2)+sqrt(1.0*k-(1.0*n*(n-1)/2)+double(1.0*n*n/4));
    if(checkKValue(n,k)){
      cout<<"YES"<<endl;
      for(int i=0;i<m;i++){
        cout<<"1"<<" ";
      }
      for(int i=m;i<n;i++){
        cout<<"-1"<<" ";
      }
      cout<<endl;
    } 
    else{
      cout<<"NO"<<endl;
    }
  }
  return 0;
}
      
