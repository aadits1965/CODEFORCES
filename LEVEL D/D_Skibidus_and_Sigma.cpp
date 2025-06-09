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
    int n,m;
    cin>>n>>m;
    long long arr[n][m];
    FOR(i,n){
      FOR(j,m){
        cin>>arr[i][j];
      }
    }
    vi brr;
    FOR(i,n){
      long long sum=0;
      FOR(j,m){
        sum+=arr[i][j];
      }
      brr.PB(sum);
    }
    vector<pair<long long, long long>> indexedArr;
    for (long long i = 0; i < n; i++) {
      indexedArr.push_back(MP(brr[i], i + 1)); 
    }
    sort(indexedArr.rbegin(), indexedArr.rend()); 
    long long sum1=0;
    long long x=n*m;
    FOR(i,n){
      FOR(j,m){
        sum1+=(x)*arr[indexedArr[i].second-1][j];
        x--;
      }
    }
    cout<<sum1<<endl;
  }
  return 0;
}