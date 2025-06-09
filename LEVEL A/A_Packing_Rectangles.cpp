#include<bits/stdc++.h>
using namespace std;

int main(){
  long long w,h,n;
  cin>>w>>h>>n;
  long long l=0;
  long long i=0;
  while(floor(pow(2,i)/w)*floor(pow(2,i)/h)<=n){
    i++;
  }
  long long r=pow(2,i);
  while(r>l+1){
    long long m=(l+r)/2;
    if(floor(m/w)*floor(m/h)>=n){
      r=m;
    }
    else{
      l=m;
    }
  }
  cout<<l+1<<endl;
}