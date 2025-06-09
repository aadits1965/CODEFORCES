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
  cin >> t;
  while (t--) {
    int n, q;
    cin >> n >> q;
    vector<long long> arr(n);
    vi qrr(q);
    FOR(i, n) {
      cin >> arr[i];
    }
    FOR(i, q) {
      cin >> qrr[i];
    }
    vector<long long> pow2(30);
    pow2[0]=1;
    for(int i=0;i<29;i++){
      pow2[i+1]=2*pow2[i];
    }
    vi brr;
    int minq=30;
    FOR(j,q){
      if(qrr[j]<minq){
        brr.PB(qrr[j]);
        minq=qrr[j];
      }
    }
    FOR(j,brr.size()){
      FOR(i,n){
        if(arr[i]%pow2[brr[j]]==0){
          arr[i]+=pow2[brr[j]-1];
        }
      }
    }
    FOR(i, n) {
      cout << arr[i] << " ";
    }
    cout << endl;
  }
  return 0;
}
