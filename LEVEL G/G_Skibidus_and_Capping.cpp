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

bool isPrime(int n) {
  if (n < 2) return false;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) return false;
  }
  return true;
}

bool isPerfectSquare(int num) {
  int sqrtNum = static_cast<int>(sqrt(num)); 
  return (sqrtNum * sqrtNum == num);  
}

int main(){
  fastIO;
  int t;
  cin>>t;
  while(t--){
    int n;
    cin >> n;  
    vi arr(n);
    FOR(i,n){
      cin >> arr[i];
    }
    int primeCount = 0;
    FOR(i,n){
      if (isPrime(arr[i])) {
        primeCount++;  
      }
    }
    long long ans=(primeCount)*(primeCount-1)/2;
    //cout<<ans<<endl;
    map<int, int> freqMap;
    for (int num : arr) {
      freqMap[num]++;
    }
    for (int num : arr) {
      int sqrtNum = sqrt(num); 
      if (sqrtNum * sqrtNum == num && isPrime(sqrtNum)) {
        ans+=freqMap[sqrtNum];
      }
    }
    //cout<<ans<<endl;
    unordered_set<int> squaresSet;  
    for (int num : arr) {
      if (isPerfectSquare(num) && isPrime(sqrt(num))) {
        squaresSet.insert(num);
      }
    }
    vector<int> distinctSquares(squaresSet.begin(), squaresSet.end());
    FOR(i,distinctSquares.size()){
      ans+=(freqMap[distinctSquares[i]]*(freqMap[distinctSquares[i]]+1)/2);
    }
    //cout<<ans<<endl;
    vi prime;
    for (int num : arr) {
      if (isPrime(num)) {
        if (find(prime.begin(), prime.end(), num) == prime.end()) {
          prime.push_back(num);
        }
      }
    }
    FOR(i,prime.size()){
      ans-=((freqMap[prime[i]]-1)*(freqMap[prime[i]])/2);
    }
    //cout<<ans<<endl;
    vector<int> primes;
    for (int i = 2; i <= n; i++) {
      if (isPrime(i)) {
        primes.push_back(i);
      }
    }
    vector<tuple<int, int, int>> vec;
    for (size_t i = 0; i < primes.size(); i++) {
      for (size_t j = i + 1; j < n/primes.size(); j++) {
        int product = primes[i] * primes[j];
        if (product <= n) {
          vec.PB(make_tuple(product, primes[i], primes[j]));
        }
      }
    }
    FOR(i,vec.size()){
      if (freqMap.count(get<0>(vec[i]))) {
        ans+=(freqMap[get<0>(vec[i])]*(freqMap[get<0>(vec[i])]+1)/2);
        ans+=freqMap[get<0>(vec[i])]*(freqMap[get<1>(vec[i])]);
        ans+=freqMap[get<0>(vec[i])]*(freqMap[get<2>(vec[i])]);
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}

        
      