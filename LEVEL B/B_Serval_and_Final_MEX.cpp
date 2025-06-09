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
      if(arr[i]==0){
        count++;
      }
    }
    if(count==0){
      cout<<"1"<<endl;
      cout<<"1 "<<n<<endl;
      continue;
    }
    if(count==n){
      cout<<"3"<<endl;
      cout<<n-1<<" "<<n<<endl;
      cout<<"1"<<" "<<n-2<<endl;
      cout<<"1 2"<<endl;
      continue;
    }
    if(arr[0]!=0){
      cout<<"2"<<endl;
      cout<<"2 "<<n<<endl;
      cout<<"1 2"<<endl;
      continue;
    }
    if(arr[n-1]!=0){
      cout<<"2"<<endl;
      cout<<"1 "<<n-1<<endl;
      cout<<"1 2"<<endl;
      continue;
    }
    int j=-1;
    for(int i=0;i<n;i++){
      if(arr[i]!=0 && i!=1 && i!=n-2){
        j=i+1;
        break;
      }
    }
    if(j!=-1){
      cout<<"3"<<endl;
      cout<<j+1<<" "<<n<<endl;
      cout<<"1 "<<j-1<<endl;
      cout<<"1 3"<<endl;
    }
    else{
      int k=-1;
      for(int i=0;i<n;i++){
        if(arr[i]!=0){
          k=i+1;
          break;
        }
      }
      if(k==2){
        cout<<"3"<<endl;
        cout<<k+1<<" "<<n<<endl;
        cout<<"1 "<<k<<endl;
        cout<<"1 2"<<endl;
      }
      else{
        cout<<"3"<<endl;
        cout<<"1 "<<k-1<<endl;
        cout<<"2"<<" "<<"3"<<endl;
        cout<<"1 2"<<endl;
      }
    }
  }
  return 0;
}