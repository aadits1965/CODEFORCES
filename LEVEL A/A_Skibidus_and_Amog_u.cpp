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
    if(s[s.length()-1]=='s'){
      s[s.length()-2]='i';
      for(int i=0;i<s.length()-1;i++){
        cout<<s[i];
      }
      cout<<endl;
    }
    else{
      s[s.length()-1]='u';
      cout<<s<<'s'<<endl;;
    }

  }
  return 0;
}