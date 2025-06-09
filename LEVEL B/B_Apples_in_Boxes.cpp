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
    vi arr(n);
    FOR(i,n){
      cin>>arr[i];
    }
    int maximum=arr[0];
    int minimum=arr[0];
    FOR(i,n){
      maximum=max(maximum,arr[i]);
      minimum=min(minimum,arr[i]);
    }
    int count=0;
    long long sum=0;
    FOR(i,n){
      if(arr[i]==maximum){
        count++;
      }
      sum+=arr[i];
    }
    if(maximum-minimum==k+1 && count>1){
      cout<<"Jerry"<<endl;
      continue;
    }
    if(maximum-minimum>k+1 ){
      cout<<"Jerry"<<endl;
      continue;
    }
    if(sum%2==0){
      cout<<"Jerry"<<endl;
    }
    else{
      cout<<"Tom"<<endl;
    }
  }
  return 0;
}