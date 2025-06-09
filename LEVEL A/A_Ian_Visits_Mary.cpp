#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while (t--){
    long long a,b;
    cin>>a>>b;
    if(__gcd(a,b)==1){
      cout<<"1\n";
      cout<<a<<" "<<b<<"\n";
    }
    else{
      if(__gcd(a-1,b)==1){
        cout<<"2\n";
        cout<<a-1<<" "<<b<<"\n";
        cout<<a<<" "<<b<<"\n";
      }
      else if(__gcd(a-1,b-1)==1){
        cout<<"2\n";
        cout<<a-1<<" "<<b-1<<"\n";
        cout<<a<<" "<<b<<"\n";
      }
      else if(__gcd(a,b-1)==1){
        cout<<"2\n";
        cout<<a<<" "<<b-1<<"\n";
        cout<<a<<" "<<b<<"\n";
      }
      else if(__gcd(a+1,b-1)==1){
        cout<<"2\n";
        cout<<a+1<<" "<<b-1<<"\n";
        cout<<a<<" "<<b<<"\n";
      }
      else if(__gcd(a+1,b)==1){
        cout<<"2\n";
        cout<<a+1<<" "<<b<<"\n";
        cout<<a<<" "<<b<<"\n";
      }
      else if(__gcd(a+1,b+1)==1){
        cout<<"2\n";
        cout<<a+1<<" "<<b+1<<"\n";
        cout<<a<<" "<<b<<"\n";
      }
      else if(__gcd(a,b+1)==1){
        cout<<"2\n";
        cout<<a<<" "<<b+1<<"\n";
        cout<<a<<" "<<b<<"\n";
      }
      else{
        cout<<"2\n";
        cout<<a-1<<" "<<b+1<<"\n";
        cout<<a<<" "<<b<<"\n";
      }  
    }
  }
  return 0;
}