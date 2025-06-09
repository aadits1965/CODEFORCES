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
  int n;
  cin>>n;
  string s;
  cin>>s;
  unordered_map<char,int>m;
  FOR(i,n){
    m[s[i]]++;
  }
  string res(n, '0');
  int i=1;
  if(n%2==0){
    for(char ch='a';ch<='z';ch++){
      while(m[ch]>1){
        res[n/2-1+i]=ch;
        res[n/2-i]=ch;
        i++;
        m[ch]-=2;
      }
    }
    FOR(j,n){
      if(res[j]=='0'){
        for(char ch='a';ch<='z';ch++){
          if(m[ch]==1){
            res[j]=ch;
            m[ch]=0;
            break;
          }
        }
      }
    }
    cout<<res<<endl;
  }
  else{
    for(char ch='a';ch<='z';ch++){
      while(m[ch]>1){
        res[n/2-i]=ch;
        res[n/2+i]=ch;
        i++;
        m[ch]-=2;
      }
    }
    FOR(j,n){
      if(res[j]=='0'){
        for(char ch='a';ch<='z';ch++){
          if(m[ch]==1){
            res[j]=ch;
            m[ch]=0;
            break;
          }
        }
      }
    }
    cout<<res<<endl;
  }
  return 0;
}