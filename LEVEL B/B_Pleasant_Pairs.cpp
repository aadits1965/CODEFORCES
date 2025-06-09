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
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i){
      cin >> arr[i];
    }
    int count = 0;
    for (int i = 0; i < n; ++i) {
      for (int val = 1; val <= 2 * n / arr[i]; ++val) {
        int j = val * arr[i] - i - 2;
        if (j > i && j < n && arr[j] == val) {
          count++;
        }
      }
    }
    cout << count << "\n";
  }
  return 0;
}