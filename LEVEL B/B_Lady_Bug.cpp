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
    string a,b;
    cin>>a>>b;
    int count1 = 0, count2 = 0;
    FOR(i,n){
      if ((i + 1) % 2 == 1) {
        if (a[i] == '1') count1++;
      } 
      else {
        if (a[i] == '1') count2++;
      }
    }
    FOR(i,n){
      if ((i + 1) % 2 == 1) {
        if (b[i] == '1') count2++;
      } 
      else {
        if (b[i] == '1') count1++;
      }
    }
    int count3 = n / 2;
    int count4 = n - count3;   
    cout << ((count1 <= count3 && count2 <= count4) ? "YES\n" : "NO\n");
  }
  return 0;
}