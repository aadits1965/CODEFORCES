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

void fn(string s,int n){
  set<string> seen;
  for (int i = 0; i < n; ++i) {
    string sub = "";
    for (int j = i; j < min(i + 3, n); ++j) { 
      sub += s[j];
      seen.insert(sub);
    }
  }
  for (char c1 = 'a'; c1 <= 'z'; ++c1) {
    string a = "";
    a += c1;
    if (!seen.count(a)) {
      cout << a << "\n";
      return;
    }
  }
  for (char c1 = 'a'; c1 <= 'z'; ++c1) {
    for (char c2 = 'a'; c2 <= 'z'; ++c2) {
      string a = "";
      a += c1; a += c2;
      if (!seen.count(a)) {
        cout << a << "\n";
        return;
      }
    }
  }
  for (char c1 = 'a'; c1 <= 'z'; ++c1) {
    for (char c2 = 'a'; c2 <= 'z'; ++c2) {
      for (char c3 = 'a'; c3 <= 'z'; ++c3) {
        string a = "";
        a += c1; a += c2; a += c3;
        if (!seen.count(a)) {
          cout << a << "\n";
          return;
        }
      }
    }
  }
}

int main(){
  fastIO;
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s; 
    fn(s,n);
  }
  return 0;
}