#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,ans=0;
  cin>>n;
  char arr[n][3];
  for(int i=0;i<n;i++){
    for(int j=0;j<3;j++){
      cin>>arr[i][j];
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<3;j++){
      cin>>arr[i][j];
    }
  if((arr[i][0]=='+' && arr[i][1]=='+' && arr[i][2]=='X') || (arr[i][0]=='X' && arr[i][1]=='+' && arr[i][2]=='+')){
    ans++;
  }
  else if((arr[i][0]=='-' && arr[i][1]=='-' && arr[i][2]=='X') || (arr[i][0]=='X' && arr[i][1]=='-' && arr[i][2]=='-')){
    ans--;
  }
  }
  cout<<ans<<endl;
  return 0;
}