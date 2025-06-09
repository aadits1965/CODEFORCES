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
    if(n%2==0){
      int m=(n-1);
      int l=(m+1)/2;
      cout<<l*l+1<<endl;

    }
    else{
      int m=(n-1)/2;
      int l=m*(m+1)*2;
      cout<<l/2+1<<endl;
    }
  }
  return 0;
}