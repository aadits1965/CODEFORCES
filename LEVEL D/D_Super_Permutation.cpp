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
    if(n==1){
      cout<<"1"<<endl;
      continue;
    }
    if(n==2){
      cout<<"2 1"<<endl;
      continue;
    }
    if(n%2){
      cout<<"-1"<<endl;
    }
    else{
      cout<<n<<" ";
      int j=n-1;
      int x=2;
      for(int i=1;i<=n/2-1;i++){
        cout<<j<<" "<<x<<" ";
        j-=2;
        x+=2;
      }
      cout<<"1"<<endl;
    }
  }
  return 0;
}