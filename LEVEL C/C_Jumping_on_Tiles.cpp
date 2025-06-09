#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
int main(){
  fastIO;
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    if(s[0]==s[s.size()-1]){
      int count=0;
      vi positions;
      FOR(i,s.size()){
        if(s[i]==s[0]){
          count++;
          positions.PB(i+1);
        }
      }
      cout<<"0 "<<count<<endl;
      FOR(i,positions.size()){
        cout<<positions[i]<<" ";
      }
      cout<<endl;
      continue;
    }
    if(s[0]<s[s.size()-1]){
      int count=0;
      FOR(i,s.size()){
        if(s[i]>=s[0] && s[i]<=s[s.size()-1]){
          count++;
        }
      }
      map<char, vector<int>> freqMap;
      FOR(i,s.size()){
        if(s[i] >= s[0] && s[i] <= s[s.size()-1]) {
          freqMap[s[i]].push_back(i + 1);
        }
      }
      cout<<s[s.size()-1]-s[0]<<" "<<count<<endl;
      for (const auto& entry : freqMap) {
        for (int idx : entry.second) {
          cout << idx << " ";
        }
      }
      cout<<endl;
      continue;
    }
    if(s[0]>s[s.size()-1]){
      int count=0;
      FOR(i,s.size()){
        if(s[i]<=s[0] && s[i]>=s[s.size()-1]){ 
          count++;
        }
      }
      map<char, vector<int>> freqMap;
      reverse(all(s));
      FOR(i,s.size()){
        if(s[i] >= s[0] && s[i] <= s[s.size()-1]) {
          freqMap[s[i]].push_back(i + 1);
        }
      }
      cout<<abs(s[s.size()-1]-s[0])<<" "<<count<<endl;
      vector<int> allIndices;
      for (const auto& entry : freqMap) {
        for (int idx : entry.second) {
          allIndices.push_back(idx);
        }
      }
      reverse(allIndices.begin(), allIndices.end()); 
      for (int idx : allIndices) {
        cout << s.size()+1-idx << " ";
     
      }
      cout<<endl;
      continue;
    }
  }
  return 0;
}