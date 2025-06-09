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
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    string s;
    cin >> s;
    string res(n, '?'); 
    int win = 0;
    for (int i = 0; i < n; ++i) {
      if (s[i] == 'R' && b > 0) {
        res[i] = 'P'; 
        b--; 
        win++;
      } 
      else if (s[i] == 'P' && c > 0) {
        res[i] = 'S'; 
        c--; 
        win++;
      } 
      else if (s[i] == 'S' && a > 0) {
        res[i] = 'R'; 
        a--; 
        win++;
      }
    }
    if (win >= (n + 1) / 2) {
      cout << "YES\n";
      for (int i = 0; i < n; ++i) {
        if (res[i] == '?') {
          if (a > 0) { 
            res[i] = 'R'; 
            a--; 
          }
          else if (b > 0) { 
            res[i] = 'P'; 
            b--; 
          }
          else if (c > 0) { 
            res[i] = 'S'; 
            c--; 
          }
        }
      }
      cout << res << '\n';
    } 
    else {
      cout << "NO\n";
    }
  }
  return 0;
}