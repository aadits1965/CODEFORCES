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
  string s;
  cin>>s;
  int n=s.size();
  vi arr(n-1);
  for(int i=0;i<n-1;i++){
    if(s[i]==s[i+1]){
      arr[i]=1;
    }
    else{
      arr[i]=0;
    }
  }
  vi presum(n-1);
  presum[0]=arr[0];
  for(int i=1;i<n-1;i++){
    presum[i]=presum[i-1]+arr[i];
  }
  int m;
  cin>>m;
  while(m--){
    int l,r;
    cin>>l>>r;
    cout<<presum[r-2]-presum[l-1]+arr[l-1]<<endl;
  }
  return 0;
}