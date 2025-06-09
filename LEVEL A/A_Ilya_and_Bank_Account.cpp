#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int t;
  cin>>t;
  if(t>=0){
    cout<<t<<endl;
  }
  else{
    if(t>=-10){
      cout<<"0"<<endl;
    }
    else{
      int a= -t;
      int lastDigit = a % 10;            
      int secondLastDigit = (a / 10) % 10;
      if(lastDigit==0 && secondLastDigit==0){
        cout<<t/10<<endl;
      }
      else{
        if(secondLastDigit<=lastDigit){
          cout<<(t+lastDigit)/10<<endl;
        }
        else{
          cout<<(t+10*secondLastDigit+lastDigit)/10-lastDigit<<endl;
        }
      }
    }
  }
  return 0;
}