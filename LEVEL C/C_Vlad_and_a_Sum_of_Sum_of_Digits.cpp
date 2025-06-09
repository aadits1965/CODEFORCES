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

int main(){
  fastIO;
  vector<int> digit_sum(200001, 0);
  for (int i = 1; i < 200001; i++) {
    digit_sum[i] = digit_sum[i / 10] + (i % 10);
  }
  vector<long long> prefix_sum(200001, 0);
  for (int i = 1; i < 200001; i++) {
    prefix_sum[i] = prefix_sum[i - 1] + digit_sum[i];
  }
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    cout<<prefix_sum[n]<<endl;
  }
  return 0;
}