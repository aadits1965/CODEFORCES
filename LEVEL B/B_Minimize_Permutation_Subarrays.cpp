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
    vi arr(n);
    FOR(i,n){
      cin>>arr[i];
    }
    int a,b,c;
    FOR(i,n){
      if(arr[i]==1){
        a=i+1;
      }
      if(arr[i]==2){
        b=i+1;
      }
      if(arr[i]==n){
        c=i+1;
      }
    }
    if((c>a && c<b) || (c<a && c>b)){
      cout<<c<<" "<<c<<endl;
    }
    else if(c<a && c<b){
      cout<<c<<" "<<((a+b)/2)<<endl;
    }
    else if(c>a && c>b){
      cout<<c<<" "<<ceil((a+b)*1.0/2)<<endl;
    }
  }
  return 0;
}