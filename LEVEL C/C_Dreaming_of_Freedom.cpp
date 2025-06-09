#include<bits/stdc++.h>
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

vector<long long> get_all_factors(long long n) {
  vector<long long> factors;
  for (long long i = 1; i * i <= n; ++i) {
    if (n % i == 0) {
      factors.push_back(i);
      if (i != n / i) {
        factors.push_back(n / i);
      }
    }
  }
  sort(factors.begin(), factors.end()); 
  return factors;
}

int main(){
  fastIO;
  int t;
  cin>>t;
  while(t--){
    int n,m;
    cin>>n>>m;
    if(m==1){
      cout<<"YES"<<endl;
      continue;
    }
    if(n%m==0){
      cout<<"NO"<<endl;
    }
    else{
      if(n==1){
        cout<<"YES"<<endl;
      }
      else{
        if(n<m){
          cout<<"NO"<<endl;
        }
        if(n>m){
          vi a=get_all_factors(n);
          if(a[1]>m){
            cout<<"YES"<<endl;
          }
          else{
            cout<<"NO"<<endl;
          }
        }
      }
    }
  }
  return 0;
}