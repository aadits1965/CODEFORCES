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
    int n,x,y;
    cin>>n>>x>>y;
    if(y%2==0){
      cout<<"-1 ";
      for(int i=2;i<y;i+=2){
        cout<<"1 -1 ";
      }
    }
    else{
      for(int i=1;i<y;i+=2){
        cout<<"1 -1 ";
      }
    }
    for(int i=y;i<=x;i++){
      cout<<"1 ";
    }
    if((n-x)%2==0){
      for(int i=x+1;i<=n;i+=2){
        cout<<"-1 1 ";
      }
    }
    else{
      cout<<"-1 ";
      for(int i=x+2;i<=n;i+=2){
        cout<<"1 -1 ";
      }
    }
    cout<<endl;
  }
  return 0;
}