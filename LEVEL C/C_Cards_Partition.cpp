#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while (t--){
    int n,k;
    cin>>n>>k;
    long long a[n],maxvalue,deck,remainder,sum=0;
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    maxvalue=a[0];
    for(int i=0;i<n;i++){
      sum += a[i];
    }
    for(int i=1;i<n;i++){
      if(a[i]>maxvalue){
        maxvalue=a[i];
      }
    }
    deck=sum/maxvalue;
    remainder=sum%maxvalue;
    if(k>=(maxvalue-remainder) && remainder!=0){
      cout<<deck+1<<endl;
    }
    else if(remainder==0){
      cout<<deck<<endl;
    }
    else{
      cout<<deck<<endl;
    }
  }
  return 0;
}