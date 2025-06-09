#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  cout.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int a,b,c,d,e,f;
    cin >> a>>b>>c>>d>>e>>f;
    int c1=c-a;
    int d1=d-b;
    int e1=e-a;
    int f1=f-b;
    if((c1==0 && d1==0) || (e1==0 && f1==0)){
      cout<<"1"<<endl;
    }
    else if(c1>0 && d1>0){
      if(f1<0 && e1>0){
        cout<<min(c1,e1)+1<<endl;
      }
      else if(e1<0 && f1<0){
        cout<<"1"<<endl;
      }
      else if(e1<0 && f1>0){
        cout<<min(d1,f1)+1<<endl;
      }
      else if(e1>0 && f1>0){
        cout<<min(c1,e1)+min(d1,f1)+1<<endl;
      }
      else if(e1==0 && f1>0){
        cout<<min(d1,f1)+1<<endl;
      }
      else if(e1==0 && f1<0 || e1<0 && f1==0){
        cout<<"1"<<endl;
      }
      else{
        cout<<min(c1,e1)+1<<endl;
      }
    }
    else if(c1<0 && d1>0){
      if(f1<0 && e1>=0){
        cout<<"1"<<endl;
      }
      else if(e1<0 && f1<0){
        cout<<min(-c1,-e1)+1<<endl;
      }
      else if(e1<0 && f1>0){
        cout<<min(-c1,-e1)+min(d1,f1)+1<<endl;
      }
      else if(e1>0 && f1>0){
        cout<<min(d1,f1)+1<<endl;
      }
      else if(e1==0 && f1>0){
        cout<<min(d1,f1)+1<<endl;
      }
      else if(e1==0 && f1<0 || e1>0 && f1==0){
        cout<<"1"<<endl;
      }
      else{
        cout<<min(-c1,-e1)+1<<endl;
      }
    }
    else if(c1<0 && d1<0){
      if(f1<0 && e1>0){
        cout<<min(-d1,-f1)+1<<endl;
      }
      else if(e1<0 && f1<0){
        cout<<min(-c1,-e1)+min(-d1,-f1)+1<<endl;
      }
      else if(e1<0 && f1>0){
        cout<<min(-c1,-e1)+1<<endl;
      }
      else if(e1>0 && f1>0){
        cout<<"1"<<endl;
      }
      else if(e1==0 && f1>0 || f1==0 && e1>0){
        cout<<"1"<<endl;
      }
      else if(e1==0 && f1<0){
        cout<<min(-d1,-f1)+1<<endl;
      }
      else{
        cout<<min(-c1,-e1)+1<<endl;
      }
    }
    else if(c1>0 && d1<0){
      if(e1>0 && f1<0){
        cout<<min(c1,e1)+min(-d1,-f1)+1<<endl;
      }
      else if(e1<0 && f1<0){
        cout<<min(-d1,-f1)+1<<endl;
      }
      else if(e1<0 && f1>0){
        cout<<"1"<<endl;
      }
      else if(e1>0 && f1>0){
        cout<<min(e1,c1)+1<<endl;
      }
      else if(e1==0 && f1>0 || f1==0 && e1<0){
        cout<<"1"<<endl;
      }
      else if(e1==0 && f1<0){
        cout<<min(-d1,-f1)+1<<endl;
      }
      else{
        cout<<min(c1,e1)+1<<endl;
      }
    }
    else if(c1==0 && d1>0){
      if(f1<=0){
        cout<<"1"<<endl;
      }
      else{
        cout<<min(f1,d1)+1<<endl;
      }
    }
    else if(c1==0 && d1<0){
      if(f1>=0){
        cout<<"1"<<endl;
      }
      else{
        cout<<min(-f1,-d1)+1<<endl;
      }
    }
    else if(c1>0 && d1==0){
      if(e1<=0){
        cout<<"1"<<endl;
      }
      else{
        cout<<min(e1,c1)+1<<endl;
      }
    }
    else{
      if(e1>=0){
        cout<<"1"<<endl;
      }
      else{
        cout<<min(-e1,-c1)+1<<endl;
      }
    }
  }
  return 0;
}