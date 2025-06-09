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

ll fn(int n, int x, int y) {
  ll ans = 0;
  while(n > 1) {
    int a = 1 << (n - 1);
    ll b = 1LL << (2 * (n - 1));
    if(x <= a && y <= a) {
    } 
    else if(x > a && y > a) {
      ans += b;
      x -= a;
      y -= a;
    } 
    else if(x > a && y <= a) {
      ans += 2 * b;
      x -= a;
    } 
    else {
      ans += 3 * b;
      y -= a;
    }
    n--;
  }
  if(x + y == 2) {
    return ans + 1;
  }
  if(x + y == 4) {
    return ans + 2;
  }
  if(x == 2) {
    return ans + 3;
  }
  return ans + 4;
}

pi gn(int n, ll c) {
  int x = 1, y = 1;
  while(n > 1) {
    int a = 1 << (n - 1);
    ll b = 1LL << (2 * (n - 1));
    if(c <= b) {
    } 
    else if(c <= 2 * b) {
      c -= b;
      auto p = gn(n - 1, c);
      return {p.F + a, p.S + a};
    } 
    else if(c <= 3 * b) {
      c -= 2 * b;
      auto p = gn(n - 1, c);
      return {p.F + a, p.S};
    } 
    else {
      c -= 3 * b;
      auto p = gn(n - 1, c);
      return {p.F, p.S + a};
    }
    n--;
  }
  if(c == 1) {
    return {c, c};
  }
  if(c == 2) {
    return {c, c};
  }
  if(c == 3) {
    return {c-1, c-2};
  }
  return {c-3, c-2};
}

int main(){
  fastIO;
  int t;
  cin >> t;
  while(t--) {
    int n, q;
    cin >> n >> q;
    while(q--) {
      string s; 
      cin >> s;
      if(s == "->") {
        int x, y; 
        cin >> x >> y;
        cout << fn(n, x, y) << endl;
      } 
      else {
        ll c; 
        cin >> c;
        pi p = gn(n, c);
        cout << p.F << " " << p.S << endl;
      }
    }
  }
  return 0;
}
