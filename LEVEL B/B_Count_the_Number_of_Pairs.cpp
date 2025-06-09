#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while (t--){
    int n,m,sum=0,count=0;
    cin>>n>>m;
    string s;
    cin>>s;
    unordered_map<char,int>freqMap;
    for (char c : s) {
      freqMap[c]++; 
    }
    for (char c = 'A'; c <= 'Z'; ++c) {
      char lower = c + 32; 
      int upperCount = freqMap[c];
      int lowerCount = freqMap[lower];
      count+=min(upperCount,lowerCount);
      int d=min(upperCount,lowerCount);
      upperCount-=d;
      lowerCount-=d;
      sum+=(upperCount+lowerCount)/2;
    }
    cout<<count+min(m,sum)<<endl;
  }
  return 0;
}