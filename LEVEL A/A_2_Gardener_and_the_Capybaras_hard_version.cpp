#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int t;
  cin>>t;
  cin.ignore();
  while(t--){
    string s;
    getline(cin,s);
    int n=s.size();
    if(!(s[0]=='a' && s[1]=='a' && s[n-1]=='b') && !(s[0]=='b' && s[1]=='a' && s[n-1]=='a')){
      cout<<s[0]<<" ";
      for(int i=1;i<=n-2;i++){
        cout<<s[i];
      }
      cout<<" "<<s[n-1]<<endl;
    }
    else if(s[0]=='a' && s[1]=='a' && s[n-1]=='b'){
      if(n==3){
        cout<<s[0]<<" "<<s[1]<<" "<<s[2]<<endl;
      }
      else{
        for(int i=0;i<n-2;i++){
            cout<<s[i];
          }
        cout<<" "<<s[n-2]<<" "<<s[n-1]<<endl;
      }
    }
    else{
      if(n==3){
        cout<<s[0]<<" "<<s[1]<<" "<<s[2]<<endl;
      }
      else{
        cout<<s[0]<<" "<<s[1]<<" ";
        for(int i=2;i<n;i++){
          cout<<s[i];
        }
        cout<<endl;
      }
    }
  }
  return 0;
}