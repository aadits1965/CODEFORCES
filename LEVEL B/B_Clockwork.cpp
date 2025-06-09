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
    int size;
    cin>>size;
    vi array(size);
    FOR(j,size){
      cin>>array[j];
    }
    bool value=true;
    FOR(j,size/2){
      if(array[j]<=2*(size-j-1)){
        value=false;
        break;
      }
    }
    if(size%2==0){
      for(int j=size/2;j<size;j++){
        if(array[j]<=2*(j)){
          value=false;
          break;
        }
      }
    }
    else{
      for(int j=size/2+1;j<size;j++){
        if(array[j]<=2*(j)){
          value=false;
          break;
        }
      }
      if(array[size/2]<=size-1){
        value=false;
      }
    }
    if(value){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
  }
  return 0;
}