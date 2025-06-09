#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k,l,c,d,p,nl,np,r,s,t,u,v;
  cin>>n>>k>>l>>c>>d>>p>>nl>>np;
  r=(k*l)/nl;
  s=c*d;
  t=p/np;
  u=min(r,min(s,t));
  v=u/n;
  cout<<v<<endl;
  return 0;
}
