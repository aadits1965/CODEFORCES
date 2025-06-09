#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
typedef long long int ll;
typedef vector<ll> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))

int match(const vi &arr, const vi &brr, int n) {
  unordered_map<int, int> freq;
  freq[arr[n - 1]]++;
  freq[brr[n - 1]]++;
  int ans = 0;

  for (int i = n - 2; i >= 0; i--) {
    if (arr[i] == brr[i]) {
      ans = i + 1;
      break;
    }

    bool X = false, Y = false;

    if (freq.count(arr[i])) {
      int temp;
      if (brr[i + 1] == arr[i]) {
        temp = freq[arr[i]] - 1;
      } else {
        temp = freq[arr[i]];
      }
      if (temp > 0) X = true;
    }

    if (freq.count(brr[i])) {
      int temp;
      if (arr[i + 1] == brr[i]) {
        temp = freq[brr[i]] - 1;
      } else {
        temp = freq[brr[i]];
      }
      if (temp > 0) Y = true;
    }

    if (X || Y) {
      ans = i + 1;
      break;
    }

    freq[arr[i]]++;
    freq[brr[i]]++;
  }

  if (arr[n - 1] == brr[n - 1]) {
    return n;
  }
  return ans;
}

int main() {
  fastIO;
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vi arr(n), brr(n);
    FOR(i, n) cin >> arr[i];
    FOR(i, n) cin >> brr[i];
    cout << match(arr, brr, n) << '\n';
  }
  return 0;
}
