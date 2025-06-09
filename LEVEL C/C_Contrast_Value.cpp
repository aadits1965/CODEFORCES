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
    if(n==1){
      cout<<n<<endl;
      continue;
    }
    if(n==2){
      if(arr[0]==arr[1]){
        cout<<n-1<<endl;
      }
      else{
        cout<<n<<endl;
      }
      continue;
    }
    unordered_set<int>unique(all(arr));
    if(unique.size()==1){
      cout<<"1"<<endl;
      continue;
    }
    int count=0;
    vi d(n-1);
    for(int i=1;i<n;i++){
      d[i-1]=arr[i]-arr[i-1];
    }
    for(int i=1;i<n;i++){
      if(d[i]==0){
        d[i]=d[i-1];
      }
    }
    for(int i=1;i<n-1;i++){
      if((d[i]<0 && d[i-1]>0) || (d[i-1]<0 && d[i]>0)){
        count++;
      }
    }
    cout<<count+2<<endl;
  }
  return 0;
}