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
    int count0=0;
    int count1=0;
    int count2=0;
    int count3=0;
    int count5=0;
    int j=0;
    FOR(i,n){
      cin>>arr[i];
    }
    FOR(i,n){
      if(arr[i]==0){
        count0++;
      }
      else if(arr[i]==1){
        count1++;
      }
      else if(arr[i]==2){
        count2++;
      }
      else if(arr[i]==3){
        count3++;
      }
      else if(arr[i]==5){
        count5++;
      }
      if(count0>=3 && count1>=1 && count2>=2 && count3>=1 && count5>=1){
        j=i+1;
        break;
      }
    }
    cout<<j<<endl;
  }
  return 0;
}