#include <bits/stdc++.h>
using namespace std;
#define io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main(){
  io;  
  int t;
  cin >> t;  
  while (t--){  
    long long n;
    cin >> n; 
    cout<<int(sqrtl(n-1))<<endl;
  }
  return 0;
}