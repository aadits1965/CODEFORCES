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
    int m=n*(n-1)/2;
    vi arr(m);
    FOR(i,m){
      cin>>arr[i];
    }
    sortall(arr);
    for(int i=0;i<m;i+=--n){
      cout<<arr[i]<<" ";
    }
    cout<<"1000000000"<<endl;
  }
  return 0;
}