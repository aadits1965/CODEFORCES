#include<bits/stdc++.h>
using namespace std;
int main(){
  int t,maxvalue,number,score,maxvalue_one,number_one,score_one,l,m,r,o,p,q,s,u,v,w;
  cin >> t;
  while (t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    if(n%2!=0){
      maxvalue=arr[0];
      for(int i=1;i<((n/2)+1);i++){
        if(arr[2*i]>maxvalue){
          maxvalue=arr[2*i];
        }
      }
      s=arr[0];
      for(int i=1;i<((n/2)+1);i++){
        if(arr[2*i]<s){
          s=arr[2*i];
        }
      }
      number=(n/2)+1;
      score=number+maxvalue+s;
      maxvalue_one=arr[1];
      for(int i=1;i<(n/2);i++){
        if(arr[2*i+1]>maxvalue_one){
          maxvalue_one=arr[2*i+1];
        }
      }
      u=arr[1];
      for(int i=1;i<(n/2);i++){
        if(arr[2*i+1]<u){
          u=arr[2*i+1];
        }
      }
      number_one=(n/2);
      score_one=number_one+maxvalue_one+u;
      if(score>score_one){
        cout<<score<<endl;
      }
      else{
        cout<<score_one<<endl;
      }
    }
    else {
      l=arr[0];
      for(int i=1;i<((n/2));i++){
        if(arr[2*i]>l){
          l=arr[2*i];
        }
      }
      v=arr[0];
      for(int i=1;i<((n/2));i++){
        if(arr[2*i]<v){
          v=arr[2*i];
        }
      }
      m=(n/2);
      r=l+m+v;
      o=arr[1];
      for(int i=1;i<(n/2);i++){
        if(arr[2*i+1]>o){
          o=arr[2*i+1];
        }
      }
      w=arr[1];
      for(int i=1;i<(n/2);i++){
        if(arr[2*i+1]<w){
          w=arr[2*i+1];
        }
      }
      p=(n/2);
      q=o+p+w;
      if(r>q){
        cout<<r<<endl;
      }
      else{
        cout<<q<<endl;
      }
    }
  }
  return 0;
}