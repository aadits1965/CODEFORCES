#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
  fastIO;
  int t;
  cin >> t;
  while (t--) {
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    int n = a + b;
    bool flag = true;
    for (int i = 0; i < n; i++) {
      if (s[i] == '0') a--;
      else if (s[i] == '1') b--;
    }
    if (a < 0 || b < 0) {
      cout << "-1\n";
      continue;
    }
    for (int i = 0; i < n / 2; i++) {
      int j = n - 1 - i;
      if (s[i] != '?' && s[j] != '?') {
        if (s[i] != s[j]) {
          flag = false;
          break;
        }
      } 
      else if (s[i] == '?' && s[j] != '?') {
        s[i] = s[j];
        if (s[i] == '0') a--;
        else b--;
      } 
      else if (s[i] != '?' && s[j] == '?') {
        s[j] = s[i];
        if (s[j] == '0') a--;
        else b--;
      }
    }
    if (a < 0 || b < 0) flag = false;
    for (int i = 0; i < n / 2; i++) {
      int j = n - 1 - i;
      if (s[i] == '?' && s[j] == '?') {
        if (a >= 2) {
          s[i] = s[j] = '0';
          a -= 2;
        } 
        else if (b >= 2) {
          s[i] = s[j] = '1';
          b -= 2;
        } 
        else {
          flag = false;
          break;
        }
      }
    }
    if (n % 2 == 1 && s[n / 2] == '?') {
      if (a >= 1) {
        s[n / 2] = '0';
        a--;
      } 
      else if (b >= 1) {
        s[n / 2] = '1';
        b--;
      } 
      else {
        flag = false;
      }
    }
    if (a != 0 || b != 0) flag = false;
    for (int i = 0; i < n / 2; i++) {
      if (s[i] != s[n - 1 - i]) {
        flag = false;
        break;
      }
    }
    if (flag) cout << s << "\n";
    else cout << "-1\n";
  }
  return 0;
}
