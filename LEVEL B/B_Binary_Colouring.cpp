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
    vi arr(32,0);
    for(int i=0;i<32;i++){
      if(n & (1<<i)){
        arr[i]=1;
      }
    }
    for(int i=0;i<32;i++){
      if(arr[i]==1 && arr[i+1]==1){
        arr[i]=-1;
        arr[i+1]=0;
        if(arr[i+2]==0){
          arr[i+2]=1;
        }
        else{
          int k=i+2;
          while(arr[k]!=0){
            arr[k]=0;
            k++;
          }
          arr[k]=1;
          i=k-1;
        }
      }
    }
    cout<<"32"<<endl;
    for(int i=0;i<32;i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
  }
  return 0;
}