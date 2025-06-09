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
    vi arr(2*n);
    int count=0;
    vi arrodd;
    vi arreven;
    FOR(i,2*n){
      cin>>arr[i];
      if(arr[i]%2!=0){
        count++;
        arrodd.PB(i+1);
      }
      else{
        arreven.PB(i+1);
      }
    }
    int count1=0;
    bool flag=true;
    if(count%2!=0){
      for(int i=0;i<(arrodd.size()-1);i+=2){
        cout<<arrodd[i]<<" "<<arrodd[i+1]<<endl;
        count1+=2;
        if(count1==(2*n-2)){
          flag=false;
          break;
        }
      }
      if(flag){
        for(int i=0;i<(arreven.size()-1);i+=2){
          cout<<arreven[i]<<" "<<arreven[i+1]<<endl;
          count1+=2;
          if(count1==(2*n-2)){
            break;
          }
        }
      }
    }
    else{
      for(int i=0;i<(arrodd.size());i+=2){
        cout<<arrodd[i]<<" "<<arrodd[i+1]<<endl;
        count1+=2;
        if(count1==(2*n-2)){
          flag=false;
          break;
        }
      }
      if(flag){
        for(int i=0;i<(arreven.size());i+=2){
          cout<<arreven[i]<<" "<<arreven[i+1]<<endl;
          count1+=2;
          if(count1==(2*n-2)){
            break;
          }
        }
      }
    } 
  }
  return 0;
}