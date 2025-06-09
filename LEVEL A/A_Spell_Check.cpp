#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin>>s;
    unordered_set<char>set1={'T','i','m','u','r'};
    if(n!=5){
      cout<<"NO"<<endl;
      continue;
    }
    unordered_set<char>set2(s.begin(),s.end());
    if(set1==set2){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }

  }
  return 0;
}
