#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int t;
  cin>>t;
  while(t--){
    int n,count=0,flag=0;
    cin>>n;
    cin.ignore();
    string s;
    getline(cin,s);
    for(int i=1;i<n-1;i++){
      if(s[i-1]=='.' && s[i]=='.' && s[i+1]=='.'){
        count++;
      }
    }
    if(count>0){
      cout<<"2"<<endl;
    }
    else{
      for(int i=0;i<n;i++){
        if(s[i]=='.'){
          flag++;
        }
      }
      cout<<flag<<endl;
    }
  }
  return 0;
}