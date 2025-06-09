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
    vi arr(n);
    FOR(i,n){
      cin>>arr[i];
    }
    long long sum=0;
    int c=0;
    int minimum=INT_MAX;
    int count=0;
    FOR(i,n){
      if(s[i]=='1'){
        sum+=arr[i];
        minimum=min(minimum,arr[i]);
        count++;
      }
      else{
        if(count==0){
          c=arr[i];
          continue;
        }
        if(minimum<c){
          sum=sum-minimum+c;
        }
        minimum=INT_MAX;
        c=arr[i];
      }
    }
    if(s[n-1]=='1' && minimum<c){
      sum=sum-minimum+c;
    }
    cout<<sum<<endl;
  }
  return 0;
}