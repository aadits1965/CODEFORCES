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
      if(s[i]=='A'){
        count++;
      }
    }
    if(s[0]=='A' && s[n-1]=='A'){
      cout<<"Alice"<<endl;
      continue;
    }
    if(s[0]=='B' && s[n-1]=='B'){
      cout<<"Bob"<<endl;
      continue;
    }
    if(s[0]=='A' && s[n-1]=='B'){
      if(n-count==1){
        cout<<"Alice"<<endl;
      }
      else{
        cout<<"Bob"<<endl;
      }
    }
    else{
      if(n==2){
        cout<<"Bob"<<endl;
      }
      else{
        if(s[n-2]=='A'){
          cout<<"Alice"<<endl;
        }
        else{
          cout<<"Bob"<<endl;
        }
      }
    }
  }
  return 0;
}