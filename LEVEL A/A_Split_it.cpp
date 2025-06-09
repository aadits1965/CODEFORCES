#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int t;
  cin>>t;
  while(t--){
    int n,k,count=0;
    cin>>n>>k;
    cin.ignore();
    string s;
    getline(cin,s);
    if(n<2*k+1){
      cout<<"NO"<<endl;
    }
    else{
      if(k==0){
        cout<<"YES"<<endl;
      }
      else{
        for(int i=0;i<k;i++){
          if(s[i]==s[n-1-i]){
            count++;
          }
        }
        if(count!=k){
          cout<<"NO"<<endl;
        }
        else{
          cout<<"YES"<<endl;
        }
      }
    }
  }
  return 0;
} 