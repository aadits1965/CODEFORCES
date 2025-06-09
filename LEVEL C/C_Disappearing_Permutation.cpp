#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define FOR(a, c) for (int(a) = 1; (a) < (c); (a)++)
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
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vi arr(n + 1), brr(n + 1);
    FOR(i,n+1){
      cin >> arr[i];
    }
    FOR(i,n+1){
      cin >> brr[i];
    }
    int a = 0, ans = 0;
    vi crr(n+1,0);
    vector<bool> visited(n + 1, false), broken(n + 1, false);
    vi drr(1, 0);
    FOR(i,n+1){
      if (!visited[i]) {
        a++;
        int current = i, size = 0;
        while (!visited[current]) {
          visited[current] = true;
          crr[current] = a;
          size++;
          current = arr[current];
        }
        drr.push_back(size);
      }
    }
    FOR(i,n+1){
      int j = crr[brr[i]];
      if (!broken[j]) {
        broken[j] = true;
        ans += drr[j];
      }
      cout << ans << " ";
    }
    cout << endl;
  }
  return 0;
}
