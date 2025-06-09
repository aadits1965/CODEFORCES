#include <bits/stdc++.h>
using namespace std;
#define io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main(){
  io;  
  int t;
  cin >> t;  
  while (t--){  
    long long n,m,k;
    cin>>n>>m>>k; 
    if(m%(k+1)==0){
      for(int i=1;i<=k;i++){
        for(int i=1;i<=m/(k+1);i++){
          cout<<"R";
        }
        cout<<"B";
      }
      for(int i=1;i<=m/(k+1);i++){
        cout<<"R";
      }
      cout<<endl;
    }
    else{
      long long d=int(ceil(m*1.0/(k+1)));
      long long e=m%(k+1);
      for(int i=1;i<=e;i++){
        for(int i=1;i<=d;i++){
          cout<<"R";
        }
        cout<<"B";
      }
      for(int i=1;i<=k-e;i++){
        for(int i=1;i<=d-1;i++){
          cout<<"R";
        }
        cout<<"B";
      }
      for(int i=1;i<=d-1;i++){
        cout<<"R";
      }
      cout<<endl;
    }
  }
  return 0;
}