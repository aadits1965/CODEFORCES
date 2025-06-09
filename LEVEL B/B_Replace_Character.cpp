#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while (t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    unordered_map<char, int> freq;
    for (char c : s) {
      freq[c]++;
    }
    int maxFreq = -1;
    char maxChar;
    for (const auto &entry : freq) {
      if (entry.second > maxFreq) {
        maxFreq = entry.second;
        maxChar = entry.first;
      }
    }
    char d=maxChar;
    int leastFreq = n+1;
    char leastChar;
    for (const auto &entry : freq) {
      if (entry.second <= leastFreq) {
        leastFreq = entry.second;
        leastChar = entry.first;
      }
    }
    char e=leastChar;
    for(int i=0;i<n;i++){
      if(s[i]==leastChar){
        s[i]=maxChar;
        break;
      }
    }
    cout<<s<<endl;
  }
  return 0;
}