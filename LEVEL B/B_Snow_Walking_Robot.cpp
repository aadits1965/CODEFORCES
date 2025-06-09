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
    int n=s.size();
    int countU=0,countD=0,countL=0,countR=0;
    FOR(i,n){
      if(s[i]=='U'){
        countU++;
      }
      else if(s[i]=='D'){
        countD++;
      }
      else if(s[i]=='L'){
        countL++;
      }
      else{
        countR++;
      }
    }
    int a=min(countU,countD);
    int b=min(countL,countR);
    if(a>0 && b>0){
      cout<<2*a+2*b<<endl;
      for(int i=0;i<a;i++){
        cout<<"U";
      }
      for(int i=0;i<b;i++){
        cout<<"L";
      }
      for(int i=0;i<a;i++){
        cout<<"D";
      }
      for(int i=0;i<b;i++){
        cout<<"R";
      }
      cout<<endl;
    }
    else if(a>0){
      cout<<"2"<<endl;
      cout<<"UD"<<endl;
    }
    else if(b>0){
      cout<<"2"<<endl;
      cout<<"LR"<<endl;
    }
    else{
      cout<<"0"<<endl;
    }
  }
  return 0;
}