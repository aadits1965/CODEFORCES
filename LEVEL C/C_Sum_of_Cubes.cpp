#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    long long a;
    cin>>a;
    unordered_set<long long> cubes;
    bool found=false;
    for (long long i = 1; i * i * i < a; i++) {
      cubes.insert(i * i * i);
    }
    for (long long i = 1; i * i * i < a; i++) {
      long long b = a - (i * i * i);
      if (cubes.count(b)) {
        cout << "YES" << endl;
        found = true;
        break;
      }
    }
    if(!found){
      cout<<"NO"<<endl;
    }
  }
  return 0;
}