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
#define MOD 1000000007

long long modexp(long long base, long long exp) {
    long long res = 1 % MOD;
    base %= MOD;
    while (exp > 0) {
        if (exp & 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp >>= 1;
    }
    return res;
}

bool isOddCell(long long x, long long y, long long n, long long m) {
    if ((x == 1 || x == n) && y > 1 && y < m) return true;
    if ((y == 1 || y == m) && x > 1 && x < n) return true;
    return false;
}

int main(){
  fastIO;
  int t;
  cin>>t;
  while(t--){
    long long n, m;
        int k;
        cin >> n >> m >> k;

        long long totalCells = n * m;
        long long freeTotal = totalCells - k;
        long long totalOdd = 2 * (m - 2) + 2 * (n - 2);

        vector<int> cavolinexy(k);
        long long precoloredOddCount = 0;
        int precoloredOddSum = 0;

        for (int i = 0; i < k; i++) {
            long long x, y;
            int c;
            cin >> x >> y >> c;
            cavolinexy[i] = c;

            if (isOddCell(x, y, n, m)) {
                precoloredOddCount++;
                precoloredOddSum = (precoloredOddSum + c) & 1;
            }
        }

        long long freeOdd = totalOdd - precoloredOddCount;
        long long freeEven = freeTotal - freeOdd;
        long long waysEven = modexp(2, freeEven);
        long long waysOdd = (freeOdd > 0) ? modexp(2, freeOdd - 1) : (precoloredOddSum == 0 ? 1LL : 0LL);
        long long ans = (waysEven % MOD) * (waysOdd % MOD) % MOD;

        cout << ans << "\n";
  }
  return 0;
}


