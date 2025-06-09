#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while(t--) {
    int n,x1,y1,x2,y2;
    cin>>n>>x1>>y1>>x2>>y2;
    int a=min(x1,y1);
    int b=min(x2,y2);
    int c=min(abs(n-x1+1),abs(n-y1+1));
    int d=min(abs(n-x2+1),abs(n-y2+1));
    int e=min(a,c);
    int f=min(b,d);
    cout<<abs(e-f)<<endl;
  }
  return 0;
}