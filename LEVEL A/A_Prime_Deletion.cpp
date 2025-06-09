#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int t;
  cin>>t;
  cin.ignore();
  while(t--){
    string s;
    getline(cin,s);
    if(s[0]=='1'){
      cout<<"13"<<endl;
    }
    else if(s[0]=='2'){
      cout<<"23"<<endl;
    }
    else if(s[0]=='3'){
      cout<<"31"<<endl;
    }
    else if(s[0]=='4'){
      cout<<"41"<<endl;
    }
    else if(s[0]=='5'){
      cout<<"53"<<endl;
    }
    else if(s[0]=='6'){
      cout<<"61"<<endl;
    }
    else if(s[0]=='7'){
      cout<<"71"<<endl;
    }
    else if(s[0]=='8'){
      cout<<"83"<<endl;
    }
    else{
      cout<<"97"<<endl;
    }
  }
  return 0;
}