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
    if(m==1){
      cout<<"1"<<" "<<endl;
      for(int i=1;i<=n-1;i++){
        cout<<"0"<<" ";
      }
      cout<<endl;
      continue;
    }
    if(n==1){
      cout<<m<<endl;
      continue;
    }
    int k=-1;
    int i=1;
    while(m/((1<<i)-1)){
      i++;
    }
    k=(1<<(i-1))-1;
    cout<<k<<" ";
    cout<<m-k<<" ";
    for(int j=1;j<=n-2;j++){
      cout<<"0"<<" ";
    }
    cout<<endl;
  }
  return 0;
}