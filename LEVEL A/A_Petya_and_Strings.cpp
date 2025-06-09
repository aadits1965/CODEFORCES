#include<bits/stdc++.h>
using namespace std;
int main(){
  int count=0;
  string s;
  getline(cin,s);
  string r;
  getline(cin,r);
  transform(s.begin(),s.end(),s.begin(),[](unsigned char c){return tolower(c); });
  transform(r.begin(),r.end(),r.begin(),[](unsigned char c){return tolower(c); });
  for(int i=0;i<s.length();i++){
    if(s[i]<r[i]){
      cout<<"-1"<<endl;
      break;
    }
    else if(s[i]>r[i]){
      cout<<"1"<<endl;
      break;
    }
    else{
      count++;
    }
  }
  if(count==s.length()){
    cout<<"0"<<endl;
  }
  return 0;
}