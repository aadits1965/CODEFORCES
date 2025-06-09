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
  if(n==1 && m==1){
    cout<<"0"<<endl;
  }
  else if(n==1){
    for(int j=2;j<=m+1;j++){
      cout<<j<<" ";
    }
    cout<<endl;
  }
  else if(m==1){
    for(int j=2;j<=n+1;j++){
      cout<<j<<" ";
    }
    cout<<endl;
  }
  else{
    int a=n+m;
    for(int i=1;i<=n;i++){
      for(int j=1;j<=m;j++){
        cout<<a*j<<" ";
      }
      cout<<endl;
      a--;
    }
    cout<<endl;
  }
  return 0;
}