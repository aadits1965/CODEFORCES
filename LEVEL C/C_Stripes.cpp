#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  cout.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    char arr[8][8];
    bool flag=true;
    for(int i=0;i<8;i++){
      for(int j=0;j<8;j++){
        cin>>arr[i][j];
      }
    }
    for(int i=0;i<8;i++){
      int countR=0;
      int countB=0;
      for(int j=0;j<8;j++){
        if(arr[i][j]=='R'){
          countR++;
        }
      }
      if(countR==8){
        cout<<"R"<<endl;
        flag=false;
        break;
      }
    }
    if(flag){
      for(int j=0;j<8;j++){
        int countR=0;
        int countB=0;
        for(int i=0;i<8;i++){
          if(arr[i][j]=='B'){
            countB++;
          }
        }
        if(countB==8){
          cout<<"B"<<endl;
          break;
        }
      }
    }
  }
  return 0;
}
  