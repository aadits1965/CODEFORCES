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
    if(n==2){
      cout<<"2 1"<<endl;
      continue;
    }
    if(m%2==0){
      for(int i=1;i<=n-2;i++){
        cout<<n-1<<" ";
      }
      cout<<n<<" "<<n-1<<endl;
    }
    else{
      for(int i=1;i<=n-1;i++){
        cout<<n<<" ";
      }
      cout<<n-1<<endl;
    }
  }
  return 0;
}