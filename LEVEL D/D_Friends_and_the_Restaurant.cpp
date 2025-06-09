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
    vi arr(n);
    vi brr(n);
    FOR(i,n){
      cin>>arr[i];
    }
    FOR(i,n){
      cin>>brr[i];
    }
    vi crr;
    vi drr;
    FOR(i,n){
      if(arr[i]>brr[i]){
        crr.PB(arr[i]-brr[i]);
      }
      else{
        drr.PB(brr[i]-arr[i]);
      }
    }
    sort(crr.rbegin(),crr.rend());
    sort(drr.rbegin(),drr.rend());
    int i=0,j=0;
    int count=0;
    while(i<crr.size() && j<drr.size()){
      if(crr[i]<=drr[j]){
        count++;
        i++;
        j++;
      }
      else{
        i++;
      }
    }
    cout<<count+(drr.size()-(j))/2<<endl;
  }
  return 0;
}