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

int nextPerfectSquare(int n) {
  int root = ceil(sqrt(n)); 
  return root * root;       
}

int main(){
  fastIO;
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vi arr(n,-1);
    int d=n-1;
    while(true){
      int y=nextPerfectSquare(d);
      for(int i=d;i>=y-d;i--){
        arr[i]=y-i;
      }
      d=y-d-1;
      if(arr[0]!=-1){
        break;
      }
    }
    FOR(i,n){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
  }
  return 0;
}