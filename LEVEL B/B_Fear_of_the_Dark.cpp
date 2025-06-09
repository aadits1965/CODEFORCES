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
    double px,py,ax,ay,bx,by;
    cin>>px>>py>>ax>>ay>>bx>>by;
    double a=sqrtf((ax*ax+ay*ay));
    double b=sqrtf((bx*bx+by*by));
    double c=sqrtf(((ax-px)*(ax-px)+(ay-py)*(ay-py)));
    double d=sqrtf(((bx-px)*(bx-px)+(by-py)*(by-py)));
    double e=sqrtf(((bx-ax)*(bx-ax)+(by-ay)*(by-ay)));
    double low=0;
    double high=2000000;
    double ans=0;
    while(high-low>0.00000001){
      double mid=(low+high)/2;
      if((a <= mid && c <= mid) || (b <= mid && d <= mid) || (a <= mid && d <= mid && e <= 2*mid) || (b <= mid && c <= mid && e <= 2*mid)){
        high=mid;
        ans=mid;
      }
      else{
        low=mid;
      }
    }
    cout<<fixed << setprecision(10) << ans<<endl;
  }
  return 0;
}