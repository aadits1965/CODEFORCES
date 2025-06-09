#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  cout.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(c==1 && d==1){
      cout<<a<<" "<<b<<" "<<a<<" "<<b<<endl;
    }
    else if(c==1 && d==b){
      cout<<a<<" 1 "<<a<<" 1 "<<endl;
    }
    else if(c==a && d==1){
      cout<<"1 "<<b<<" 1 "<<b<<endl;
    }
    else if(c==a && d==b){
      cout<<"1 1 1 1"<<endl;
    }
    else{
      if(c>1 && d>1 && c<a && d<b){
        cout<<"1 1 "<<a<<" "<<b<<endl;
      }
      else{
        if(c==1 && d>1 && d<b){
          cout<<a<<" 1 "<<a<<" "<<b<<endl;
        }
        else if(c==a &&  d>1 && d<b){
          cout<<"1 1 1 "<<b<<endl;
        }
        else if(d==1 &&  c>1 && c<a){
          cout<<"1 "<<b<<" "<<a<<" "<<b<<endl;
        }
        else{
          cout<<"1 1 "<<a<<" 1"<<endl;
        }
      }
    }
  }
  return 0;
}