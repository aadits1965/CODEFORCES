#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int count0=0,count1=0;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
      if(s[i]=='0'){
        count0++;
      }
      else{
        count1++;
      }
    }
    if(count0==count1){
      cout<<"0"<<endl;
    }
    else{
      int j=0;
      for(int i=0;i<s.length() && count0>0 && count1>0;i++){
        if(s[i]=='0'){
          count1--;
        }
        else{
          count0--;
        }
        j=i;
      }
      if(count0==0){
        for(int i=j+1;i<s.length() && count1>0;i++){
          if(s[i]=='0'){
            count1--;
          }
          else{
            break;
          }
        }
        cout<<count1<<endl;
      }
      else{
        for(int i=j+1;i<s.length() && count0>0;i++){
          if(s[i]=='1'){
            count0--;
          }
          else{
            break;
          }
        }
        cout<<count0<<endl;
      }
    }
  }
  return 0;
}

    