#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n,total=0;
    cin>>n;
    string a,b;
    cin>>a>>b;
    for(int i=0;i<a.length();i++){
      if(a[i]=='0' && b[i]=='0'){
        if(a[i+1]=='1' && b[i+1]=='1'){
          total+=2;
          i++;
        }
        else{
          total++;
        }
      }
      else if(a[i]=='1' && b[i]=='1' ){
        if(a[i+1]=='0' && b[i+1]=='0'){
          total+=2;
          i++;
        }
        else{
          continue;
        }
      }
      else{
        total+=2;
      }
    }
    cout<<total<<endl;
  }
  return 0;
}