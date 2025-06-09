#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int t;
  cin>>t;
  while(t--){
    int n,count=0;
    cin>>n;
    cin.ignore();
    string s;
    getline(cin,s);
    int count1=0;
    int count0=0;
    bool repetition1=false;
    for(int i=0;i<n;i++){
      if(s[i]=='1'){
        count1++;
      }
      else{
        count0++;
      } 
      if(s[i]==s[i+1] && s[i]=='1' && i<n-1){
        repetition1=true;
      }
    }
    if(repetition1==true){
      cout<<"YES"<<endl;
    }
    else if(s[0]=='1' || s[n-1]=='1'){
      cout<<"YES"<<endl;
    }
    else if(count0>count1){
      cout<<"NO"<<endl;
    }
    else{ 
      cout<<"YES"<<endl;
    }
  }
  return 0;
}