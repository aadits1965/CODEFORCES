#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); 
  cout.tie(nullptr); 
  int t;
  cin>>t;
  while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b && b==c){
      cout<<"YES"<<endl;
    }
    else if(a==b && c>a){
      if(((a+c)/2)%b==0 && (a+c)%2==0){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
    }
    else if(a==b && c<a){
      if(((2*b-a)%c==0 && 2*b-a>0) || ((2*b-c)%a==0 && 2*b-c>0)){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
    }
    else if(a==c && b>a){
      if(((2*b-a)%c==0 && 2*b-a>0) || ((2*b-c)%a==0 && 2*b-c>0)){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
    }
    else if(a==c && b<a){
      if(a%b==0){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
    }
    else if(c==b && a>b){
      if(((a+c)/2)%b==0 && (a+c)%2==0){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
    }
    else if(c==b && a<b){
      if(b%a==0 || ((2*b-a)%c==0 && 2*b-a>0)){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
    }
    else if(c>b && b>a){
      if(((2*b-a)%c==0 && 2*b-a>0) || ((2*b-c)%a==0 && 2*b-c>0) || (((a+c)/2)%b==0 && (a+c)%2==0)){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
    }
    else if(c>a && a>b){
      if(((a+c)/2)%b==0 && (a+c)%2==0){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
    }
    else if(b>c && c>a){
      if(((2*b-a)%c==0 && 2*b-a>0) || ((2*b-c)%a==0 && 2*b-c>0)){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
    }
    else if(a>c && c>b){
      if(((a+c)/2)%b==0 && (a+c)%2==0){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
    }
    else if(b>a && a>c){
      if(((2*b-a)%c==0 && 2*b-a>0) || ((2*b-c)%a==0 && 2*b-c>0)){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
    }
    else{
      if(((2*b-a)%c==0 && 2*b-a>0) || ((2*b-c)%a==0 && 2*b-c>0) || (((a+c)/2)%b==0 && (a+c)%2==0)){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
    }
  }
  return 0;
}