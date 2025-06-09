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
    vi arr(n);
    FOR(i,n){
      cin>>arr[i];
    }
    vector<string>result;
    result.PB("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
    FOR(i,n){
      string s=result[result.size()-1];
      if(arr[i]==50){
        result.PB(s);
        continue;
      }
      string sub = s.substr(0, arr[i]);
      if(s[sub.length()]=='a'){
        for(int j=sub.length();j<50;j++){
          sub+='b';
        }
      }
      else{
        for(int j=sub.length();j<50;j++){
          sub+='a';
        }
      }
      result.PB(sub);
    }
    FOR(i,n+1){
      cout<<result[i]<<endl;
    }
  }
  return 0;
}