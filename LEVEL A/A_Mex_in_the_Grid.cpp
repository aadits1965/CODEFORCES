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
    int count=1;
    vector<vi>arr(n,vi(n));
    arr[(n-1)/2][(n-1)/2]=0;
    int index_x=(n-1)/2;
    int index_y=(n-1)/2;
    int number=1;
    int dir=0;
    int rboundary=index_y+1;
    int lboundary=index_y-1;
    int uboundary=index_x-1;
    int dboundary=index_x+1;
    while(count<n*n){
      if(dir==0){
        index_y++;
        arr[index_x][index_y]=number;
        number++;
        if(index_y==rboundary){
          rboundary++;
          dir=3;
        }
      }
      else if(dir==1){
        index_y--;
        arr[index_x][index_y]=number;
        number++;
        if(index_y==lboundary){
          lboundary--;
          dir=2;
        }
      }
      else if(dir==2){
        index_x--;
        arr[index_x][index_y]=number;
        number++;
        if(index_x==uboundary){
          uboundary--;
          dir=0;
        }
      }
      else{
        index_x++;
        arr[index_x][index_y]=number;
        number++;
        if(index_x==dboundary){
          dboundary++;
          dir=1;
        }
      }
      count++;
    }
    FOR(i,n){
      FOR(j,n){
        cout<<arr[i][j]<<" ";
      }
      cout<<endl;
    }
  }
  return 0;
}