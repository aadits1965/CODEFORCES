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
  string s;
  cin>>s;
  int n=s.length();
  int count=0;
  FOR(i,n){
    if(s[i]=='9'){
      count++;
    }
  }
  bool flag=true;
  FOR(i,n){
    if(s[i]=='9' && flag){
      flag=false;
      continue;
    }
    if(s[i]<='4'){
      flag=false;
      continue;
    }
    if(s[i]>'4'){
      s[i]=9-(s[i]-'0')+'0';
      flag=false;
    }
  }
  cout<<s<<endl;
  return 0;
}