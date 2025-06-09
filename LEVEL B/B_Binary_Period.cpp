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
    string s;
    cin>>s;
    int n=s.length();
    int count0=0;
    int count1=0;
    FOR(i,n){
      if(s[i]=='0'){
        count0++;
      }
      else{
        count1++;
      }
    }
    if(count0==0 || count1==0){
      cout<<s<<endl;
    }
    else{
      string ans="";
      ans+=s[0];
      for(int i=1;i<n;i++){
        if(s[i]==s[i-1]){
          if(s[i]=='0'){
            ans+="10";
          }
          else{
            ans+="01";
          }
        }
        else{
          ans+=s[i];
        }
      }
      cout<<ans<<endl;
    }
  }
  return 0;
}