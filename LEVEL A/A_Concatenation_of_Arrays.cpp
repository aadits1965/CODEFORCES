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

bool cmp(pair<int, int>& p1, pair<int, int>& p2) {
  int sum1 = p1.first + p1.second;
  int sum2 = p2.first + p2.second;
  if (sum1 == sum2)
    return p1.first < p2.first;
  return sum1 < sum2;
}

int main() {
  fastIO;
  int t;
  cin>>t;
  while(t--){
    int n;
    cin >> n;
    vector<pi> v(n);
    for (int i = 0; i < n; ++i)
      cin >> v[i].first >> v[i].second;
    sort(v.begin(), v.end(), cmp);
    for (auto it : v)
      cout << it.first << " " << it.second <<" ";
    cout<<endl;
  }
  return 0;
}