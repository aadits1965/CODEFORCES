#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  cout.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    cin.ignore();
    string s;
    getline(cin,s);
    string result;
    for (size_t i = 0; i < n-1; ++i) {
      result += s[i];
      if ((s[i] == 'b' || s[i] == 'c' || s[i] == 'd' ) && (s[i+1] == 'b' || s[i+1] == 'c' || s[i+1] == 'd' )) {
        result += '.';
      }
    }
    result+=s[n-1];
    string finalResult;
    for (size_t i = 0; i < result.length()-2; ++i) {
      finalResult += result[i];
      if ((result[i] == 'a' || result[i] == 'e') && (result[i + 1] == 'b' || result[i + 1] == 'c' || result[i + 1] == 'd') && (result[i+2] == 'a' || result[i+2] == 'e')) {
        finalResult += '.';
      }
    }
    finalResult+=result[result.length()-2];
    finalResult+=result[result.length()-1];
    cout<<finalResult<<endl;
  }
  return 0;
}