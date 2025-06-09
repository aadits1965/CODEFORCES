#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  string s;
  getline(cin,s);
  string result = s;
  int pos;
  while ((pos = result.find("WUB")) != string::npos) {
    result.replace(pos, 3, " ");
  }
  result.erase(unique(result.begin(), result.end(), [](char a, char b) {
  return a == ' ' && b == ' ';
  }), result.end());
  if (!result.empty() && result.front() == ' ') {
    result.erase(result.begin());
  }
  if (!result.empty() && result.back() == ' ') {
    result.pop_back();
  }
  cout<<result<<endl;
  return 0;
}
