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
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    if(k%2==0){
      sortall(s);
      cout<<s<<endl;
    }
    else{
      string sodd="";
      string seven="";
      for(int i=0;i<n;i++){
        if(i%2==0){
          sodd+=s[i];
        }
        else{
          seven+=s[i];
        }
      }
      sortall(sodd);
      sortall(seven);
      string result="";
      for(int i=0;i<=n/2-1;i++){
        result+=sodd[i];
        result+=seven[i];
      }
      if(n%2!=0){
        result+=sodd[sodd.size()-1];
      }
      cout<<result<<endl;
    }
  }
  return 0;
}