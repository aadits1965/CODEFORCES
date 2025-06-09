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
    long long n,k;
    cin>>n>>k;
    if(n%2==0 && k%2!=0){
      cout<<"NO"<<endl;
      continue;
    }
    if(n%2!=0 && k%2==0){
      cout<<"NO"<<endl;
      continue;
    }
    if(k*k>n){
      cout<<"NO"<<endl;
      continue;
    }
    cout<<"YES"<<endl;
  }
  return 0;
}