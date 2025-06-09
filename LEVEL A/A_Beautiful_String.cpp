#include<bits/stdc++.h>
using namespace std; 

int main(){
  int n;
  cin>>n;
  while(n--){
    string a;
    cin>>a;
    if(a[0]=='?'){
      if(a[1]=='b'){
        a[0]='a';
      }
      else{
        a[0]='b';
      }
    }
    if(a[a.size()-1]=='?'){
      if(a[a.size()-2]=='b'){
        a[a.size()-1]='a';
      }
      else{
        a[a.size()-1]='b';
      }
    }
    for(int i=1;i<a.size()-1;i++){
      if(a[i]=='?'){
        if(a[i-1]=='a' && a[i+1]=='a'){
          a[i]='b';
        }
        else if(a[i-1]=='a' && a[i+1]=='b'){
          a[i]='c';
        }
        else if(a[i-1]=='a' && a[i+1]=='c'){
          a[i]='b';
        }
        else if(a[i-1]=='a' && a[i+1]=='?'){
          a[i]='b';
        }
        else if(a[i-1]=='b' && a[i+1]=='a'){
          a[i]='c';
        }
        else if(a[i-1]=='b' && a[i+1]=='b'){
          a[i]='a';
        }
        else if(a[i-1]=='b' && a[i+1]=='c'){
          a[i]='a';
        }
        else if(a[i-1]=='b' && a[i+1]=='?'){
          a[i]='a';
        }
        else if(a[i-1]=='c' && a[i+1]=='a'){
          a[i]='b';
        }
        else if(a[i-1]=='c' && a[i+1]=='b'){
          a[i]='a';
        }
        else if(a[i-1]=='c' && a[i+1]=='c'){
          a[i]='a';
        }
        else if(a[i-1]=='c' && a[i+1]=='?'){
          a[i]='a';
        }
      }
    }
    bool flag=true;
    for(int i=0;i<a.size()-1;i++){
      if(a[i]==a[i+1]){
        cout<<"-1"<<endl;
        flag=false;
        break;
      }
    }
    if(flag){
      cout<<a<<endl;
    }
  }
  return 0;
}