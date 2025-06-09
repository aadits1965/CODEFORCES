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
    vi arr(n-1);
    FOR(i,n-1){
      cin>>arr[i];
    }
    vi result(n);
    if(n==2){
      cout<<"0 "<<arr[0]<<endl;
      continue;
    }
    vi arrplus=arr;
    vi arrminus=arr;
    sortall(arrplus);
    sort(arrminus.rbegin(),arrminus.rend());
    bool flag=false;
    vi result2;
    if(arrplus==arr){
      result[0]=0;
      for(int i=1;i<n;i++){
        result[i]=arr[i-1];
      }
    }
    else if(arrminus==arr){;
      for(int i=0;i<n-1;i++){
        result[i]=arr[i];
      }
      result[n-1]=0;
    }
    else{
      flag=true;
      int count=0;
      for(int i=0;i<n-2;i++){
        if(arr[i]>arr[i+1]){
          if(count==0){
            result2.PB(arr[i]);
          }
          else{
            result2.PB(arr[i+1]);
          }
        }
        else{
          result2.PB(arr[i]);
          if(count==0){
            result2.PB(arr[i]);
            count++;
          }
        }
      }
      result2.PB(arr[n-2]);
    }
    if(!flag){
      FOR(i,n){
        cout<<result[i]<<" ";
      }
      cout<<endl;
    }
    else{
      FOR(i,result2.size()){
        cout<<result2[i]<<" ";
      }
      cout<<endl;
    }
  }
  return 0;
}