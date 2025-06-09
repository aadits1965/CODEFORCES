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

int sumOfDigits(int num) {
  int sum = 0;
  while (num > 0) {
    sum += num % 10;
    num /= 10;
  }
  return sum;
}

int main() {
  fastIO;
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;    
    if (n % 2 == 0) {
      cout << n / 2 << " " << n / 2 << endl;
      continue;
    }    
    int best_i = -1; 
    for (int i = n/2-int(pow(10,int(log10(n))-1)); i <= n/2+10+int(pow(10,int(log10(n))-1)); i++) {
      int sum1 = sumOfDigits(i);
      int sum2 = sumOfDigits(n-i);
      int diff = abs(sum1 - sum2);
      if (diff <= 1) {
        best_i = i;
        break;  
      }
    }
    cout << best_i << " " << n - best_i << endl;
  }
  return 0;
}
