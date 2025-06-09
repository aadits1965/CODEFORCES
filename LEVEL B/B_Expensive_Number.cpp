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
    if(s.length()==1){
      cout<<"0"<<endl;
    }
    else{
      int count=0;
      int count2=0;
      for(int i=0;i<s.length();i++){
        if(s[i]=='0'){
          count++;
        }
      }
      for(int i=s.length()-1;i>=0;i--){
        if(s[i]=='0'){
          count2++;
        }
        else{
          break;
        }
      }
      if(count==0){
        cout<<s.length()-1<<endl;
      }
      else{
        cout<<s.length()-count-1+count2<<endl;

      }
    }
  }
  return 0;
}