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
    vector<string>arr(3);
    for(int i=0;i<3;i++){
      cin>>arr[i];
    }
    string result="";
    for(int i=0;i<3;i++){
      string l=arr[i];
      result+=l[0];
    }
    cout<<result<<endl;
  }
  return 0;
}