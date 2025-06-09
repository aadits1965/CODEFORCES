#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin>>n;
    cout<<ceil(log2f(ceil((n+2)*1.0/3)))+1<<endl;
  }
  return 0;
}