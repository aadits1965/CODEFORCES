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

int pow2(int a,int b){
  if(b==0){
    return 1;
  }
  return a*pow2(a,b-1);
}

int main(){
  fastIO;
  int t;
  cin>>t;
  while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<pow2(10,a-1)+pow2(10,c-1)<<" "<<pow2(10,b-1)<<endl;
  }
  return 0;
}