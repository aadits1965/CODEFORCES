#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    string s;
    cin>>s;
    int n=s.length();
    int arr[n],brr[n];
    int u=0,v=0;
    for(int i=0;i<n;i++){
      if(s[i]=='B'){
        if(v>0){
          s[brr[--v]]='0';
        }
      }
      else if(s[i]=='b'){
        if(u>0){
          s[arr[--u]]='0';
        }
      }
      else if(s[i]>96){
        arr[u++]=i;
      }
      else if(s[i]>64){
        brr[v++]=i;
      }
    }
    for(int i=0;i<n;i++){
      if(s[i]!='0' && s[i]!='B' && s[i]!='b'){
        cout<<s[i];
      }
    }
    cout<<"\n";
  }
  return 0;
}
