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
    string s;
    cin>>s;
    bool foundp=false;
    bool founds=false;
    bool flag=true;
    FOR(i,n){
      if(s[i]=='p' && !founds){
        foundp=true;
      }
      else if(s[i]=='p' && i!=n-1){
        flag=false;
        break;
      }
      else if(s[i]=='s'){
        if(foundp){
          flag=false;
          break;
        }
        else{
          if(i==0){
            continue;
          }
          founds=true;
          continue;
        }
      }
    }
    if(flag){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
  }
  return 0;
}