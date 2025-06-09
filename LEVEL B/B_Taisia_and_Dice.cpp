#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int a,b,c;
    cin>>a>>b>>c;
    int d=b-c;
    int e=c/(a-1);
    int f=c%(a-1);
    for(int i=1;i<=f;i++){
      cout<<e+1<<" ";
    }
    for(int i=1;i<=(a-1)-f;i++){
      cout<<e<<" ";
    }
    cout<<d<<endl;
  }
  return 0;
}