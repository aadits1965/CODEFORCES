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
int main(){
  fastIO;
  int t;
  cin>>t;
  for(int l=1;l<=t;l++){
    ll n,m,h;
    cin>>n>>m>>h;
    vector<vi>arr(n,vi(m));
    FOR(i,n){
      FOR(j,m){
        cin>>arr[i][j];
      }
    }
    vector<pair<ll,ll>>score;
    FOR(i,n){
      vi a;
      FOR(j,m){
        a.PB(arr[i][j]);
      }
      sortall(a);
      ll count=0;
      ll time=0;
      ll sum=0;
      FOR(k,m){
        sum+=a[k];
        time+=sum;
        if(sum<=h){
          count++;
        }
        else{
          time-=sum;
          break;
        }
      }
      score.PB({count,time});
    }
    pair<ll,ll> first_person = score[0];
    sort(score.begin(), score.end(), [](const pair<ll, ll>& a, const pair<ll, ll>& b) {
      if (a.first != b.first){
        return a.first > b.first;
      } 
      return a.second < b.second;   
    });
    int rank = 1;
    for (auto& p : score) {
      if (p == first_person){
        break;
      }
      rank++;
    }
    cout<<rank<<endl;
  }
  return 0;
}