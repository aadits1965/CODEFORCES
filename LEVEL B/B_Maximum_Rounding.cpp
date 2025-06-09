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
    int n=s.length();
    int j=-1;
    for(int i=0;i<n;i++){
      if(s[i]-'0'>=5){
        j=i;
        break;
      }
    }
    int k=-1;
    if(j==-1){
      cout<<s<<endl;
    }
    else{
      for(int i=j;i<n;i++){
        s[i]='0';
      }
      for(int i=j-1;i>=0;i--){
        if(s[i]-'0'>=4){
          s[i]='0';
        }
        else{
          s[i]=char((s[i] - '0' + 1) + '0');
          k=i;
          break;
        }
      }
      if(k==-1){
        string l="1";
        l+=s;
        cout<<l<<endl;
        continue;
      }
      if(j==0){
        string l="1";
        l+=s;
        cout<<l<<endl;
        continue;
      }
      cout<<s<<endl;
    }
  }
  return 0;
}