#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while(t--){
    int n,m;
    cin >> n>>m;
    vector<string> words(n);
    for (int i = 0; i < n; ++i) {
      cin >> words[i];
    }
    int currentlength = 0;
    int count = 0; 
    for (int i = 0; i < n; ++i) {
      currentlength += words[i].length();
      if (currentlength <= m) {
        count++; 
      } 
      else {
        break; 
      }
    }
    cout << count << endl;  
  }
  return 0;
}
