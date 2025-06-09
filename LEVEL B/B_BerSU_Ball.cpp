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
  int n;
  cin>>n;
  vi arr(n);
  FOR(i,n){
    cin>>arr[i];
  }
  int m;
  cin>>m;
  vi arr2(m);
  FOR(i,m){
    cin>>arr2[i];
  }
  sortall(arr);
  sortall(arr2);
  int i=0;
  int j=0;
  int ans=0;
  while(i<n && j<m){
    if(abs(arr[i]-arr2[j])<=1){
      ans++;
      i++;
      j++;
    }
    else if(arr[i]>arr2[j]){
      j++;
    }
    else{
      i++;
    }
  }
  cout<<ans<<endl;
  return 0;
}