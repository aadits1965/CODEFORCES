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
    vi arr1(n),arr2(n),arr3(n);
    FOR(i,n){
      cin>>arr1[i];
    }
    FOR(i,n){
      cin>>arr2[i];
    }
    FOR(i,n){
      cin>>arr3[i];
    }
    if(k==0){
      cout<<"YES"<<endl;
      continue;
    }
    int d=0;
    int i1=-1;
    for(int i=0;i<n;i++){
      d=d|arr1[i];
      if((~k)&d){
        i1=i;
        break;
      }
    }
    d=0;
    int i2=-1;
    for(int i=0;i<n;i++){
      d=d|arr2[i];
      if((~k)&d){
        i2=i;
        break;
      }
    }
    d=0;  
    int i3=-1;
    for(int i=0;i<n;i++){
      d=d|arr3[i];
      if((~k)&d){
        i3=i;
        break;
      }
    }
    d=0;
    if(i1==-1){
      i1=n;
    }
    if(i2==-1){
      i2=n;
    } 
    if(i3==-1){
      i3=n;
    }
    for(int i=0;i<i1;i++){
      d=d|arr1[i];
    }
    for(int i=0;i<i2;i++){
      d=d|arr2[i];
    }
    for(int i=0;i<i3;i++){
      d=d|arr3[i];
    }
    if(d==k){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
  }
  return 0;
}