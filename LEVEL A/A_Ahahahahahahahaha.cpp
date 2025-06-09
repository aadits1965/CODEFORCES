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
    int count=0;
    FOR(i,n){
      cin>>arr[i];
      if(arr[i]){
        count++;
      }
    }
    if(n==2 && count==2){
      cout<<"2"<<endl;
      cout<<"1 1"<<endl;
      continue;
    }
    if(n==2 && count!=2){
      cout<<"1"<<endl;
      cout<<"0"<<endl;
      continue;
    }
    if(count>n/2){
      if((n/2)%2==0){
        cout<<n/2<<endl;
        FOR(i,n/2){
          cout<<"1 ";
        }
        cout<<endl;
      }
      else{
        cout<<n/2+1<<endl;
        FOR(i,n/2+1){
          cout<<"1 ";
        }
        cout<<endl;
      }
    }
    else{
      cout<<n/2<<endl;
      FOR(i,n/2){
        cout<<"0 ";
      }
      cout<<endl;
    }
  }
  return 0;
}