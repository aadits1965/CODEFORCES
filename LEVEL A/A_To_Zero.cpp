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
    int x,y;
    cin>>x>>y;
    if(x%2==0){
      if(y%2==0){
        cout<<int(ceil(1.0*x/y))<<endl;
      }
      else{
        cout<<int(ceil(1.0*x/(y-1)))<<endl;
      }
    }
    else{
      if(y%2!=0){
        x=x-y;
        cout<<int(ceil(1.0*x/(y-1))+1)<<endl;
      }
      else{
        x=x-y+1;
        cout<<int(ceil(1.0*x/(y))+1)<<endl;
      }
    }
  }
  return 0;
}