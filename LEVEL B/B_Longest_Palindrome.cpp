#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,m;
  cin>>n>>m;
  vector<string>str(n);
  vector<string>result;
  vector<string>result2;
  bool flag1=false,flag2=false;
  for(int i=0;i<n;i++){
    cin>>str[i];
  }
  for(int i=0;i<n;i++){
    string a=str[i];
    reverse(a.begin(),a.end());
    if(a==str[i] && !flag1){
      result2.push_back(str[i]);
      flag1=true;
      continue;
    }
    else{
      for(int j=i+1;j<n;j++){
        if(str[j]==a){
          result.push_back(str[i]);
          result.push_back(str[j]);
          flag2=true;
          break;
        }
      }
    }
  }
  if(!flag1 && !flag2){
    cout<<"0"<<endl;
  }
  else{
    cout<<m*(result.size()+result2.size())<<endl;
    for(int i=0;i<result.size();i+=2){
      cout<<result[i];
    }
    for(int i=0;i<result2.size();i++){
      cout<<result2[i];
    }
    for(int i=result.size()-1;i>0;i-=2){
      cout<<result[i];
    }
    cout<<endl;
  }
  return 0;
}