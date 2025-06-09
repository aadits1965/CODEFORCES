#include <bits/stdc++.h>
using namespace std;
 
int main() {
	ios::sync_with_stdio(false), cin.tie(0);
	int t; 
  cin >> t;
	while (t--) {
		int n;
		cin >> n;
		long long current = 0;
		for (int i = 0; i < n; ++i) {
			long long x;
      cin >> x;
			current = max(0LL, current + x);
		}
		cout << current << endl;
	}
}