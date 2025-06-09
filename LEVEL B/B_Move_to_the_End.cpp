#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define FOR(a, c) for (long long(a) = 0; (a) < (c); (a)++)
typedef long long int ll;
typedef vector<long long> vi;
typedef pair<long long, long long> pi;
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
    vi arr(n);
    FOR(i,n){
      cin>>arr[i];
    }
    vi arr2;
    long long sum=0;
    for(long long i=n-1;i>=0;i--){
      sum+=arr[i];
      arr2.PB(sum);
    }
    vi arr3;
    long long maximum=arr[0];
    FOR(i,n){
      maximum=max(arr[i],maximum);
      arr3.PB(maximum);
    }
    FOR(i,n){
      cout<<max(arr2[i],arr2[i]-(arr[n-i-1])+arr3[n-i-1])<<" ";
    }
    cout<<endl;
  }
  return 0;
}