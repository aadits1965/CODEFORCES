#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    if(n==1){
      cout<<"1"<<endl;
      cout<<"1"<<endl;
    }
    else{
      if(k==1 || k==n){
        cout<<"-1"<<endl;
      }
      else{
        if(k<=(n+1)/2){
          cout<<"3"<<endl;
          cout<<"1"<<" "<<"2"<<" "<<2*k-1<<endl;
        }
        else{
          cout<<"3"<<endl;
          cout<<"1"<<" "<<2*k-n+1<<" "<<n<<endl;
        }
      }
    }
  }
  return 0;
}