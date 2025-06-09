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
    vector<vector<char>> grid(n, vector<char>(m));
    for(int i=0;i<n;i++)
      for(int j=0;j<m;j++)
        cin>>grid[i][j];

    bool flag=true;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        if(grid[i][j]=='1'){
          bool validRow=true,validCol=true;
          for(int k=0;k<j;k++)
            if(grid[i][k]=='0') {validRow=false; break;}
          for(int k=0;k<i;k++)
            if(grid[k][j]=='0') {validCol=false; break;}
          if(!validRow && !validCol){
            cout<<"NO\n";
            flag=false;
            break;
          }
        }
      }
      if(!flag) break;
    }
    if(flag) cout<<"YES\n";
  }
  return 0;
}