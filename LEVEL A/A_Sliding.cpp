#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int t;
  cin>>t;
  cin.ignore();
  while(t--){
    long long n,m,a,b;
    cin>>n>>m>>a>>b;
    cout<<(n-a)*m+((m-b)+(n-a)*m)-(n-a)<<endl;
  }
  return 0;
}