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
    vi arr(n);
    vi brr(n);
    long long sum1=0,sum2=0;
    FOR(i,n){
      cin>>arr[i];
    }
    FOR(i,n){
      cin>>brr[i];
    }
    int count=0;
    int d=0;
    FOR(i,n){
      if(arr[i]<brr[i]){
        count++;
        d=brr[i]-arr[i];
        arr[i]=brr[i]+d;
        if(count==2){
          cout<<"NO"<<endl;
          break;
        }
      }
    }
    bool flag=true;
    if(count==1){
      FOR(i,n){
        if(arr[i]-brr[i]<d){
          cout<<"NO"<<endl;
          flag=false;
          break;
        }
      }
      if(flag){
        cout<<"YES"<<endl;
      }
    }
    if(count==0){
      cout<<"YES"<<endl;
    }
  }
  return 0;
}