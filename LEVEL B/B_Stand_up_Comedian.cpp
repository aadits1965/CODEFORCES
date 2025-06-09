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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int ans=a;//3
    int mood=a;//3
    if(mood==0){
      if(d>0 || b>0 || c>0){
        cout<<"1"<<endl;
      }
      else{
        cout<<"0"<<endl;
      }
    }
    else{
      ans+=2*min(b,c);//3
      int f=min(b,c);
      b-=f;//0
      c-=f;//0
      if(b==0 && c==0){
        if(mood<d){
          cout<<ans+mood+1<<endl;
        }
        else{
          cout<<ans+d<<endl;
        }
      }
      else if(b>0){
        int e=d+b;
        if(mood<e){
          cout<<ans+mood+1<<endl;
        }
        else{
          cout<<ans+e<<endl;
        }
      }
      else{
        int e=d+c;//11
        if(mood<e){
          cout<<ans+mood+1<<endl;
        }
        else{
          cout<<ans+e<<endl;
        }
      }
    }
  }
  return 0;
}