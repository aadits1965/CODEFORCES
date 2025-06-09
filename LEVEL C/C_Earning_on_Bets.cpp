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

ll lcm(ll a, ll b) {
  return (a / __gcd(a, b)) * b;
}

ll lcmOfArray(const vector<ll>& arr) {
  ll result = arr[0];
  for (size_t i = 1; i < arr.size(); ++i) {
    result = lcm(result, arr[i]);
  }
  return result;
}

int main(){
  fastIO;
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<long long>arr(n);
    vector<ll>arr2;
    FOR(i,n){
      cin>>arr[i];
    }
    ll l=lcmOfArray(arr);
    ll count=0;
    FOR(i,n){
      count+=l/arr[i];
      arr2.PB(l/arr[i]);
    }
    if(count<l){
      FOR(i,n){
        cout<<arr2[i]<<" ";
      }
      cout<<endl;
    }
    else{
      cout<<"-1"<<endl;
    }
  }
  return 0;
}