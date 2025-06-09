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

void factorize_and_add(map<long long, int>& freq, long long n) {
  while (n % 2 == 0) {
    freq[2]++;
    n /= 2;
  }
  for (long long i = 3; i * i <= n; i += 2) {
    while (n % i == 0) {
      freq[i]++;
      n /= i;
    }
  }
  if (n > 1) freq[n]++;
}

int main() {
  fastIO;
  int t;
  cin>>t;
  while(t--){
    int n;
    cin >> n;
    vi arr(n);
    for (int i = 0; i < n; ++i){
      cin >> arr[i];
    }
    map<long long, int> freq;
    for (int i = 0; i < n; ++i){
      factorize_and_add(freq, arr[i]);
    }
    bool flag=true;
    for(auto it: freq){
      if(it.second%n!=0){
        flag=false;
        break;
      }
    }
    if(flag){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
  }
  return 0;
}