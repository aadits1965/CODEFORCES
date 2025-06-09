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
    int count=0;
    for(int i=0;i<n/2;i++){
      if(s[i]!=s[n-i-1]){
        count++;
      }
    }
    if(n==2 && (s=="01" || s=="10")){
      cout<<"010"<<endl;
      continue;
    }
    if(n%2==0){
      for(int i=1;i<=count;i++){
        cout<<"0";
      }
      for(int i=1;i<=((n+1)-2*count)/2;i++){
        cout<<"10";
      }
      cout<<"1";
      for(int i=1;i<=count;i++){
        cout<<"0";
      }
      cout<<endl;
    }
    else{
      for(int i=1;i<=count;i++){
        cout<<"0";
      }
      for(int i=1;i<=n/2-count+1;i++){
        cout<<"1";
      }
      for(int i=1;i<=n/2-count+1;i++){
        cout<<"1";
      }
      for(int i=1;i<=count;i++){
        cout<<"0";
      }
      cout<<endl;
    }
  }
  return 0;
}