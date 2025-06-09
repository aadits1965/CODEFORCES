#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<bool> isPrime(n + 1, true);
  isPrime[0] = isPrime[1] = false;
  for (int i = 2; i * i <= n; ++i) {
    if (isPrime[i]) {
      for (int j = i * i; j <= n; j += i) {
        isPrime[j] = false;
      }
    }
  }
  vector<int> primes;
  for (int i = 2; i <= n; ++i) {
    if (isPrime[i]) {
      primes.push_back(i);
    }
  }
  int almostPrimeCount = 0;
  for (int i = 1; i <= n; ++i) {
    int primeFactors = 0;
    int temp = i;
    for (int prime : primes) {
      if (prime * prime > temp) break;
      if (temp % prime == 0) {
        primeFactors++;
        while (temp % prime == 0) {
          temp /= prime;
        }
      }
    }
    if (temp > 1) {
      primeFactors++;
    }
    if (primeFactors == 2) {
      almostPrimeCount++;
    }
  }
  cout << almostPrimeCount << std::endl;
  return 0;
}
