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
    int n,count3=0,count2=0,count=0;
    cin>>n;
    vi arr;
    for(int i=1;i<=n*n;i++){
      if(count3==0){
        arr.PB(n*n-i+1);
        count2++;
        count3++;
        i--;
      }
      else{
        arr.PB(i);
        count3=0;
        count2++;
      }
      if(count2==n*n){
        break;
      }
    }
    count2=0,count3=0;
    int d=0;
    FOR(i,n*n){
      if(count<n){
        cout<<arr[i]<<" ";
        count++;
        count3++;
        if(count==n){
          cout<<endl;
          count2=0;
        }
      }
      else{
        if(count2<n){
          if(count2==0){
            d=i+n-1; 
          }
          cout<<arr[d--]<<" ";
          count2++;
          count3++;
          if(count2==n){
            cout<<endl;
            count=0;
          }
        }
      }
      if(count3==n*n){
        break;
      }
    }
    cout<<endl;
  }
  return 0;
}