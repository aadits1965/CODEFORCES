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
    int count=0,count2=0;
    FOR(i,n){
      if(s[i]=='0'){
        count++;
      }
    }
    int j=0;
    for(int i=0;i<n;i++){
      if(s[i]=='1'){
        j=i;
        break;
      }
    }
    for(int i=j;i<n-1;i++){
      if(s[i]=='1' && s[i+1]=='0' || s[i]=='0' && s[i+1]=='1'){
        count2++;
      }
    }
    if(count==n){
      cout<<n-n<<endl;
      continue;
    }
    if(count==0){
      cout<<n-n+1<<endl;
      continue;
    }
    cout<<count2+1<<endl;
  }
  return 0;
}