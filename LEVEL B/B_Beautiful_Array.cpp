#include <bits/stdc++.h>
using namespace std;
#define io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main(){
  io;  
  int t;
  cin >> t;  
  while (t--){  
    long long n,k,b,s;
    cin>>n>>k>>b>>s;  
    if(n==1){
      if(s/k==b){
        cout<<s<<endl;
      }
      else{
        cout<<"-1"<<endl;
      }
    }
    else{
      if(s<b*k){
        cout<<"-1"<<endl;
      }
      else{
        if(s>(b+1)*k-1+(n-1)*(k-1)){
          cout<<"-1"<<endl;
        }
        else {
          cout << min(s,(b+1)*k-1)<< " ";
          long long d = s-min(s,(b+1)*k-1);
          for (int i = 1; i < n; i++) {
            long long give = min(k - 1, d);
            cout << give << " ";
            d -= give;
          }
          cout << endl;
        }
      }
    }
  }
  return 0;
}