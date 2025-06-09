#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    string s;
    cin>>s;
    int count=0;
    string a="314159265358979323846264338327";
    for(int i=0;i<s.length();i++){
      if(s[i]==a[i]){
        count++;
      }
      else{
        break;
      }
    }
    cout<<count<<endl;
  }
  return 0;
}