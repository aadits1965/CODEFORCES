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
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
      string s;
      cin>>s;
      FOR(j,m){
        arr[i][j]=s[j]-'0';
      }
    }
    int count1=0;
    FOR(i,n){
      int xor1=0;
      FOR(j,m){
        xor1=xor1^arr[i][j];
      }
      if(xor1==1){
        count1++;
      }
    }
    int count2=0;
    FOR(j,m){
      int xor2=0;
      FOR(i,n){
        xor2=xor2^arr[i][j];
      }
      if(xor2==1){
        count2++;
      }
    }
    cout<<max(count1,count2)<<endl;
  }
  return 0;
}