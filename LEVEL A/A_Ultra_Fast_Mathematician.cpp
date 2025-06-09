#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  string s1;
  getline(cin,s1);
  string s2;
  getline(cin,s2);
  int arr[s1.size()];
  for(int i=0;i<s1.size();i++){
    if(s1[i]==s2[i]){
      arr[i]=0;
    }
    else{
      arr[i]=1;
    }
  }
  for(int i=0;i<s1.size();i++){
    cout<<arr[i];
  }
  cout<<endl;
  return 0;
}