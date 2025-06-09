#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int t;
  cin>>t;
  while(t--){
    int n,m,count=0,flag=0,counter1=0,counter0=0;
    cin>>n>>m;
    cin.ignore();
    string a,b;
    getline(cin,a);
    getline(cin,b);
    if(n==1){
      cout<<"Yes"<<endl;
    }
    else{
      for(int i=0;i<n-1;i++){
        if(a[i+1]==a[i]){
          count++;
          break;
        }
      }
      if(count==0){
        cout<<"Yes"<<endl;
      }
      else{
        for(int i=0;i<n-1;i++){
          if(a[i+1]==a[i] && a[i]=='1'){
            counter1++;
            break;
          }
        }
        for(int i=0;i<n-1;i++){
          if(a[i+1]==a[i] && a[i]=='0'){
            counter0++;
            break;
          }
        }
        if(counter1>0 && counter0==0){
          if(m==1 && b[0]=='0'){
            cout<<"yes"<<endl;
          }
          else if(m==1 && b[0]=='1'){
            cout<<"No"<<endl;
          }
          else if(m==2){
            cout<<"No"<<endl;
          }  
          else{
            for(int i=0;i<m-1;i++){
              if(b[i+1]==b[i]){
                flag++;
                break;
              }
            }
            if(flag>0){
              cout<<"No"<<endl;
            }
            else{
              if(b[0]=='0' && b[m-1]=='0'){
                cout<<"Yes"<<endl;
              }
              else{
                cout<<"No"<<endl;
              }
            }
          }
        }
        else if(counter1==0 && counter0>0){
          if(m==1 && b[0]=='1'){
            cout<<"yes"<<endl;
          }
          else if(m==1 && b[0]=='1'){
            cout<<"No"<<endl;
          }
          else if(m==2){
            cout<<"No"<<endl;
          }  
          else{
            for(int i=0;i<m-1;i++){
              if(b[i+1]==b[i]){
                flag++;
                break;
              }
            }
            if(flag>0){
              cout<<"No"<<endl;
            }
            else{
              if(b[0]=='1' && b[m-1]=='1'){
                cout<<"Yes"<<endl;
              }
              else{
                cout<<"No"<<endl;
              }
            }
          }
        }
        else{
          cout<<"No"<<endl;
        }
      }
    }
  }
  return 0;
}