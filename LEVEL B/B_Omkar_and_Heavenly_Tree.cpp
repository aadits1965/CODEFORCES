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

int findMEX(vector<int>& arr) {
  unordered_set<int> s(arr.begin(), arr.end());
  int mex = 1;
  while (s.count(mex)) {
    mex++;
  }
  return mex;
}

int main(){
  fastIO;
  int t;
  cin>>t;
  while(t--){
    int n,m;
    cin>>n>>m;
    vector<vi>arr(m,vi(3));
    FOR(i,m){
      FOR(j,3){
        cin>>arr[i][j];
      }
    }
    vi a;
    FOR(i,m){
      a.PB(arr[i][1]);
    }
    sortall(a);
    int k=findMEX(a);
    for(int i=1;i<=n;i++){
      if(i!=k){
        cout<<i<<" "<<k<<endl;
      }
    }
  }
  return 0;
}