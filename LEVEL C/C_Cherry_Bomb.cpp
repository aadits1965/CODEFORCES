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
    long long n,k;
    cin>>n>>k;
    vi arr(n);
    vi brr(n);
    FOR(i,n){
      cin>>arr[i];
    }
    FOR(i,n){
      cin>>brr[i];
    }
    long long x=-3;
    bool flag=true;
    FOR(i,n){
      if(arr[i]!=-1 && brr[i]!=-1){
        if(arr[i]>k || brr[i]>k){
          flag=false;
          break;
        }
        else{
          if(x==-3){
            x=arr[i]+brr[i];
          }
          else{
            if(arr[i]+brr[i]!=x){
              flag=false;
              break;
            }
          }
        }
      }
    }
    if(!flag){
      cout<<"0"<<endl;
    }
    else{
      if(x==-3){
        long long minimum=INT_MAX;
        long long maximum=-2;
        FOR(i,n){
          if(arr[i]!=-1){
            minimum=min(minimum,arr[i]);
            maximum=max(maximum,arr[i]);
          }
          else{
            minimum=min(minimum,brr[i]);
            maximum=max(maximum,brr[i]);
          }
        }
        long long count2=0;
        FOR(i,n){
          if(arr[i]==-1 && brr[i]==-1){
            count2++;
          }
        }
        ll d=minimum+k-maximum+1;
        cout<<d+count2*d*(d+1)/2<<endl;
      }
      else{
        FOR(i,n){
          if(arr[i]==-1){
            if(brr[i]!=-1 && brr[i]>x){
              flag=false;
              break;
            }
          }
          else{
            if(arr[i]!=-1 && arr[i]>x){
              flag=false;
              break;
            }
          }
        }
        if(!flag){
          cout<<"0"<<endl;
        }
        else{
          long long count1=0;
          FOR(i,n){
            if(arr[i]==-1 && brr[i]==-1){
              count1++;
            }
          }
          cout<<max(1LL,count1)<<endl;
        }
      }
    }
  }
  return 0;
}