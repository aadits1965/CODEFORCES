#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
      long long x,y;
      long long count=0;
      cin>>x>>y;
      int a,b;
      cin>>a>>b;
      if(2*a>=b){
        if(x>y){
          count=(y)*b+((x-y)*a);
        }
        else if(x==y){
          count=x*b;
        }
        else{
          count=(x)*b+((y-x)*a);
        }
      }
      else{
        count=((x+y)*a);
      }
      cout<<count<<endl;
    }
  return 0;
}
