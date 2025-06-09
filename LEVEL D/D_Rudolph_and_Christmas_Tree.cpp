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
    double n,d,h;
    cin>>n>>d>>h;
    double area=d*h/2;
    double cot=d/h;;
    vector<double>arr(n);
    FOR(i,n){
      cin>>arr[i];
    }
    double ans=area;
    for(int i=1;i<n;i++){
      if(arr[i]-arr[i-1]>=h){
        ans+=area;
      }
      else{
        ans+=area;
        double h1=h-(arr[i]-arr[i-1]);
        double d1=h1*cot;
        ans-=h1*d1/2;
      }
    }
    cout<< fixed << setprecision(10)<<ans<<endl;
  }
  return 0;
}