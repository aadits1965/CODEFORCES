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
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vi arr(n+1);
    vi brr(n+1);
    for(int i=1;i<n;i++){
      cin>>arr[i];
    }
    arr[0] = arr[n] = 0;
    for (int i = 1; i <= n; i++){
      brr[i] = arr[i - 1] | arr[i];
    }
    bool valid = true;
    for (int i = 1; i < n; i++){
      if ((brr[i] & brr[i + 1]) != arr[i]) {
        valid = false;
        break;
      }
    }
    if (valid) {
      for (int i = 1; i <= n; i++){
        cout << brr[i] << ' ';
      }
      cout << '\n';
    } 
    else{
      cout << -1 << endl;
    }
  }
  return 0;
}