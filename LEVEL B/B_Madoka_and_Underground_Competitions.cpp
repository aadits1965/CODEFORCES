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
    int n,k,r,c;
    cin>>n>>k>>r>>c;
    vector<vector<char>> arr(n+1, vector<char>(n+1, '.'));
    arr[r][c]='X';
    for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
        if((i+j)%k==(r+c)%k){
          arr[i][j]='X';
        }
      }
    }
    for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
        cout<<arr[i][j];
      }
      cout<<endl;
    }
  }
  return 0;
}