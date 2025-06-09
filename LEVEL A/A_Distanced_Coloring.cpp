#include<bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n,m,k,a,b;
    cin>>n>>m>>k;
    cout<<min(n,k)*min(m,k)<<endl;
  }
  return 0;
}