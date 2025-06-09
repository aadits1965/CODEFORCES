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

bool perfectsquare(ll x) {
  ll s = sqrt(x);
  return s * s == x;
}

int main(){
  fastIO;
  int t;
  cin>>t;
  int n=1e6;
  vector<bool> isPrime(n+1, true);
  isPrime[0] = isPrime[1] = false; 
  for (int i = 2; i * i <= n; i++) {
    if (isPrime[i]) { 
      for (int j = i * i; j <= n; j += i) {
        isPrime[j] = false;
      }
    }
  }
  vector<long long>arr(t);
  FOR(i,t){
    cin>>arr[i];
    if(perfectsquare(arr[i]) && arr[i]!=1 && isPrime[sqrtl(arr[i])]==true){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
  }
  return 0;
}