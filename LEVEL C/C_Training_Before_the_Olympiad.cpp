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
    FOR(i,n){
      cin>>arr[i];
    }
    vector<ll> sumarr;
    vi oddcount;
    long long sum=0;
    int count=0;
    FOR(i,n){
      sum+=arr[i];
      sumarr.PB(sum);
      if(arr[i]%2!=0){
        count++;
      }
      oddcount.PB(count);
    }
    FOR(i,n){
      if(i==0){
        cout<<sumarr[0]<<" ";
      }
      else{
        if(oddcount[i]==1){
          cout<<sumarr[i]-1<<" ";
        }
        else if(oddcount[i]==2){
          cout<<sumarr[i]<<" ";
        }
        else if(oddcount[i]==3){
          cout<<sumarr[i]-1<<" ";
        }
        else{
          cout<<sumarr[i]-(oddcount[i]/3)-((oddcount[i]%3)%2)<<" ";
        }
      }
    }
    cout<<endl;
  }
  return 0;
}