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
    int count=0;
    FOR(i,n){
      if(s[i]=='1'){
        count++;
      }
    }
    if(count%2==0){
      int b=n-count;
      int maximum=n/2;
      int minimum=abs(count-b)/2;
      if(k<=maximum && k>=minimum){
        if((k-minimum)%2==0){
          cout<<"YES"<<endl;
        }
        else{
          cout<<"NO"<<endl;
        }
      }
      else{
        cout<<"NO"<<endl;
      }
    }
    else{
      int d=min(count,n-count);
      int minimum=n/2-d;
      int maximum=n/2-1;
      if(k<=maximum && k>=minimum){
        if((k-minimum)%2==0){
          cout<<"YES"<<endl;
        }
        else{
          cout<<"NO"<<endl;
        }
      }
      else{
        cout<<"NO"<<endl;
      }
    }
  }
  return 0;
}