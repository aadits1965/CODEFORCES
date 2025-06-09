#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while (t--){
    int n;
    cin>>n;
    cin.ignore();
    string s;
    getline(cin,s);
    int a=s.size();
    if(n==1){
      cout<<"1"<<endl;
    }
    else{
      for(int i=0;i<(s.size()/2);i++){
        if((s[i]=='1' && s[s.size()-1-i]=='0') || (s[i]=='0' && s[s.size()-1-i]=='1')){
          a-=2;
        }
        else{
          break;
        }
      }
      cout<<a<<endl;
    }
  }
  return 0;
}