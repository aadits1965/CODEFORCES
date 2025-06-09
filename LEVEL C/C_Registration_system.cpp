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
  set<string>st;
  unordered_map<string,int>m;
  while(t--){
    string s;
    cin>>s;
    if(st.find(s)!=st.end()){
      cout<<s<<m[s]<<endl;
      m[s]++;
    }
    else{
      st.insert(s);
      m[s]=1;
      cout<<"OK"<<endl;
    }
  }
  return 0;
}