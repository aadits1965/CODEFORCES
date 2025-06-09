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
    string s;
    cin>>s;
    string t=s;
    reverse(t.begin(),t.end());
    if(n==1){
      cout<<"NO"<<endl;
      continue;
    }
    if(m==0){
      if(s<t){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
      continue;
    }
    bool flag=false;
    for(int i=1;i<n;i++){
      if(s[i]!=s[0]){
        flag=true;
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
  return 0;
}