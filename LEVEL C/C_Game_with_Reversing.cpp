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
    string s1,s2;
    cin>>s1>>s2;
    if(s1==s2){
      cout<<"0"<<endl;
      continue;
    }
    int count=0;
    FOR(i,n){
      if(s1[i]!=s2[i]){
        count++;
      }
    }
    int count2=0;
    reverse(all(s2));
    FOR(i,n){
      if(s1[i]!=s2[i]){
        count2++;
      }
    }
    if(count2==0){
      cout<<"2"<<endl;
      continue;
    }
    cout<<min(2*count-count%2,2*count2-(1-count2%2))<<endl;
  }
  return 0;
}