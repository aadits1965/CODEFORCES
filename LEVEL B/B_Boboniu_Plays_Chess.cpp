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
  int n,m,sx,sy;
  cin>>n>>m>>sx>>sy;
  cout<<sx<<" "<<sy<<endl;
  cout<<"1 "<<sy<<endl;
  int k=0;
  int i=1;
  int j=1;
  bool right=true;
  while(i<=n){
    while(j<=m && j>=1){
      if((i==sx && j==sy) || (i==1 && j==sy)){
        if(right){
          j++;
        }
        else{
          j--;
        }
        continue;
      }
      cout<<i<<" "<<j<<endl;
      k=j;
      if(right){
        j++;
      }
      else{
        j--;
      }
    }
    if(i==n && k==m){
      break;
    }
    i++;
    if(right){
      j=m;
    }
    else{
      j=1;
    }
    right=(!right);
  }
  return 0;
}