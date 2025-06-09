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
    if(n%2){
      cout<<"NO"<<endl;
    }
    else{
      sortall(arr);
      vi arr1;
      vi arr2;
      FOR(i,n){
        if(i<n/2){
          arr1.PB(arr[i]);
        }
        else{
          arr2.PB(arr[i]);
        }
      }
      FOR(i,n){
        if(i%2==0){
          arr[i]=arr1[i/2];
        }
        else{
          arr[i]=arr2[i/2];
        }
      }
      bool flag=true;
      FOR(i,n-1){
        if(arr[i]==arr[i+1]){
          flag=false;
          break;
        }
      }
      if(!flag){
        cout<<"NO"<<endl;
      }
      else{
        cout<<"YES"<<endl;
        FOR(i,n){
          cout<<arr[i]<<" ";
        }
        cout<<endl;
      }
    }
  }
  return 0;
}