#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
typedef long long int ll;
typedef vector<ll> vi;
typedef pair<ll, ll> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))

pair<ll,ll> findTwoMissingNumbers(const vector<ll>& nums, ll n) {
  long long total = n * (n + 1LL) / 2;
  long long total_sq = n * (n + 1LL) * (2 * n + 1LL) / 6;
  long long sum = 0, sum_sq = 0;
  for (int num : nums) {
    sum += num;
    sum_sq += 1LL * num * num;
  }
  long long S = total - sum;        
  long long P = total_sq - sum_sq;   
  long long xy = (S * S - P) / 2;     
  double discriminant = sqrt(S * S - 4 * xy);
  ll x = (S + discriminant) / 2;
  ll y = S - x;
  return {x,y};
}

int main(){
  fastIO;
  int t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vi arr(n-1);
    FOR(i,n-1){
      cin>>arr[i];
    }
    vi a;
    a.PB(arr[0]);
    FOR(i,n-2){
      a.PB(arr[i+1]-arr[i]);
    }
    ll count=0;
    vi b,c;
    FOR(i,n-1){
      if(a[i]>=1 && a[i]<=n){
        c.PB(a[i]);
      }
      else{
        count++;
        b.PB(a[i]);
      }
    }
    if(count>1){
      cout<<"NO"<<endl;
      continue;
    }
    if(count==1){
      unordered_set<int>q(all(c));
      if(q.size()!=n-2){
        cout<<"NO"<<endl;
        continue;
      }
      pi p=findTwoMissingNumbers(c,n);
      if(p.F+p.S==b[0]){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
    }
    else{
      unordered_set<int>q(all(c));
      unordered_map<int, int> freq;
      ll f=-1;
      for (int num : c) {
        freq[num]++;
        if (freq[num] == 2) {
          f=num;
        }
      }
      if(f==-1){
        if(q.size()!=n-1){
          cout<<"NO"<<endl;
          continue;
        }
        long long total = n * (n + 1LL) / 2;
        long long sum = 0;
        for (int num : c) {
          sum += num;
        }
        ll k=total-sum;
        if(freq[k]==0){
          cout<<"YES"<<endl;
        }
        else{
          cout<<"NO"<<endl;
        }
      }
      else{
        if(q.size()!=n-2){
          cout<<"NO"<<endl;
          continue;
        }
        long long total = n * (n + 1LL) / 2;
        long long total_sq = n * (n + 1LL) * (2 * n + 1LL) / 6;
        long long sum = 0, sum_sq = 0;
        for (int num : c) {
          sum += num;
          sum_sq += 1LL * num * num;
        }
        sum-=f;
        sum_sq-=f*f;
        long long S = total - sum;        
        long long P = total_sq - sum_sq;   
        long long xy = (S * S - P) / 2;     
        double discriminant = sqrt(S * S - 4 * xy);
        ll x = (S + discriminant) / 2;
        ll y = S - x;
        if(x+y==f){
          cout<<"YES"<<endl;
        }
        else{
          cout<<"NO"<<endl;
        }
      }
    }
  }
  return 0;
}