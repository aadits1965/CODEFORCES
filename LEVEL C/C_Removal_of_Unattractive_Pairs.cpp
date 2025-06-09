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
    unordered_map<char,int>m;
    for(char a:s){
      m[a]++;
    }
    int maxFreq=0;
    for (auto& it : m) {
      maxFreq = max(maxFreq, it.second);
    }
    if(n%2){
      if(maxFreq>(n+1)/2){
        cout<<maxFreq-(n-maxFreq)<<endl;
      }
      else{
        cout<<"1"<<endl;
      }
    }
    else{
      if(maxFreq>n/2){
        cout<<maxFreq-(n-maxFreq)<<endl;
      }
      else{
        cout<<"0"<<endl;
      }
    }
  }
  return 0;
}