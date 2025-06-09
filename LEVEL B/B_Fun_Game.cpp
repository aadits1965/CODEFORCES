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
    string s1,s2;
    cin>>s1>>s2;
    if(s1==s2){
      cout<<"YES"<<endl;
      continue;
    }
    if(s1[0]=='1' && s2[0]=='1'){
      cout<<"YES"<<endl;
    }
    else{
      bool flag=true;
      FOR(i,n){
        if(s1[i]=='0' && s2[i]=='1'){
          flag=false;
        }
        if(s1[i]=='1'){
          break;
        }
      }
      if(flag){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }

    }
  }
  return 0;
}