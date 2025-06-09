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
    long long n;
    cin>>n;
    string s;
    cin>>s;
    long long count=0;
    for(int i=0;i<n;i++){
      if(s[i]=='-'){
        count++;
      }
    }
    if(n-count<1 || count<2){
      cout<<"0"<<endl;
    }
    else{
      if((count)%2==0){
        cout<<(count)*(n-count)*count/4<<endl;
      }
      else{
        cout<<(count/2)*(count/2+1)*(n-count)<<endl;
      }
    }
  }
  return 0;
}