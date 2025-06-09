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
  int n,m;
  cin>>n>>m;
  vi arr(n);
  FOR(i,n){
    cin>>arr[i];
  }
  vector<long long>arr2;
  long long ans=0;
  for(int i=0;i<m;i++){
    ans+=arr[i];
  }
  arr2.push_back(ans);
  for(int i=m;i<n;i++){
    ans+=arr[i]-arr[i-m];
    arr2.push_back(ans);
  }
  long long minimum=LONG_LONG_MAX;
  int j=1;
  for(int i=0;i<arr2.size();i++){
    if(arr2[i]<minimum){
      minimum=arr2[i];
      j=i+1;
    }
  }
  cout<<j<<endl;
  return 0;
}