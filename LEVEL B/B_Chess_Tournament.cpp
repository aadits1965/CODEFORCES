#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n,count=0;
    cin >> n;
    string s;
    cin>>s;
    char arr[n][n];
    for(int i=0;i<n;i++){
      if(s[i]=='2'){
        count++;
      }
    }
    if(count==1 || count==2){
      cout<<"NO"<<endl;
    }
    else if(count==0){
      cout<<"YES"<<endl;
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          if(i==j){
            arr[i][j]='X';
          }
          else{
            arr[i][j]='=';
          }
        }
      }
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          cout<<arr[i][j];
        }
        cout<<endl;
      }
    }
    else{
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          arr[i][j]='0';
        }
      }
      cout<<"YES"<<endl;
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          if(i==j){
            arr[i][j]='X';
          }
        }
      }
      for(int i=0;i<n;i++){
        if(s[i]=='1'){
          for(int j=0;j<n;j++){
            if(j==i){
              continue;
            }
            else{
              arr[i][j]='=';
              arr[j][i]='=';
            }
          }
        }
      }
      for(int i=0;i<n;i++){
        if(s[i]=='2'){
          for(int j=0;j<n;j++){
            if(arr[i][j]=='0'){
              arr[i][j]='+';
              arr[j][i]='-';
              break;
            }
          }
        }
      }
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          if(arr[i][j]=='0'){
            arr[i][j]='+';
            arr[j][i]='-';
          }
        }
      }
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          cout<<arr[i][j];
        }
        cout<<endl;
      }
    }
  }
  return 0;
}
