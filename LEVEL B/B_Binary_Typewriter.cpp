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
    int count=0;
    FOR(i,n){
      if(s[i]=='0'){
        count++;
      }
    }
    if(count==n){
      cout<<n<<endl;
      continue;
    }
    if(count==0){
      cout<<n+1<<endl;
      continue;
    }
    if(s[0]=='0'){
      int ans=1;
      for(int i=1;i<n;i++){
        if(s[i]!=s[i-1]){
          ans+=2;
        }
        else{
          ans++;
        }
      }
      cout<<ans<<endl;
    }
    else{
      int count1=0;
      FOR(i,n-1){
        if(s[i]!=s[i+1]){
          count1++;
        }
      }
      int ans=2;
      for(int i=1;i<n;i++){
        if(s[i]!=s[i-1]){
          ans+=2;
        }
        else{
          ans++;
        }
      }
      if(count1==1){
        cout<<ans-1<<endl;
      }
      else{
        cout<<ans-2<<endl;
      }
    }
  }
  return 0;
}