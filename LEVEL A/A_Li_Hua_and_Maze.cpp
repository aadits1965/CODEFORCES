#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while (t--){
    long long n,m,a,b,c,d;
    cin>>n>>m;
    cin>>a>>b>>c>>d;
    long long arr[n][m];
    if((a==1 && b==1) || (a==n && b==1) || (a==1 && b==m) || (a==n && b==m) || (c==1 && d==1) || (c==n && d==1) || (c==1 && d==m) || (c==n && d==m) ){
      cout<<"2"<<endl;
    }
    else if((b==1 || a==1 || b==m || a==n) || (d==1 || c==1 || d==m || c==n)){
      cout<<"3"<<endl;
    }
    else{
      cout<<"4"<<endl;
    }
  }
  return 0;
}