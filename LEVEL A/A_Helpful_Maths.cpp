#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  getline(cin, s);
  vector<int> arr;
  int n = s.length();
  for(int i=0;i<n;i++){
    if(s[i]>='1' && s[i]<='3'){
      arr.push_back(s[i]-'0');
    }
  }
  sort(arr.begin(),arr.end());
  for(int i=0;i<arr.size();i++){
    cout<<arr[i];
    if(i!=arr.size()-1){
      cout<<"+";
    }
  }
  cout<<endl;
  return 0;
}
