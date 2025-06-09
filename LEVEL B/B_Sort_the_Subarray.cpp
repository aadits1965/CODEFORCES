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
    vi arr2(n);
    FOR(i,n){
      cin>>arr[i];
    }
    FOR(i,n){
      cin>>arr2[i];
    }
    int j=0;
    int maxlen=0;
    int v1=-1;
    int v2=-1;
    FOR(i,n){
      if(arr[i]!=arr2[i]){
        j=i;//1
        int k=j;//1
        for(int i=j;i<n-1;i++){
          if(arr2[i+1]<arr2[i]){
            k=i;
            break;
          }
        }
        if(k==j){
          k=n-1;
        }
        int m=-1;
        for(int l=j;l>0;l--){
          if(arr2[l-1]>arr2[l]){
            m=l;
            break;
          }
        }
        if(m==-1){
          m=0;
        }
        int curr=k+1-m;
        if(maxlen<curr){
          maxlen=curr;
          v1=k;
          v2=m;
        }
        i=k+1;
      }
    }
    cout<<v2+1<<" "<<v1+1<<endl;
  }
  return 0;
}