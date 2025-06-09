#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
  if (num <= 1) return false;
  for (int i = 2; i <= sqrt(num); ++i) {
    if (num % i == 0) return false; 
  }
  return true;
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin>>n;
    string s;
    cin >> s;
    bool flag=true;
    for(int i=0;i<n;i++){
      if(s[i]=='4' || s[i]=='6' || s[i]=='8' || s[i]=='9' || s[i]=='1'){
        cout<<"1"<<endl;
        cout<<s[i]<<endl;
        flag=false;
        break;
      }
    }
    if(flag){
      vector<pair<char, char>> pairs;
      for (size_t i = 0; i < s.size(); ++i) {
        for (size_t j = i + 1; j < s.size(); ++j) {
          pairs.push_back({s[i], s[j]});
        }
      }
      for (const auto& p : pairs) {
        int num=(p.first-'0')*10+(p.second-'0');
        if (!isPrime(num)) {
          cout<<"2"<<endl;
          cout << num <<endl;
          break;
        }
      }
    }
  }
  return 0;
}