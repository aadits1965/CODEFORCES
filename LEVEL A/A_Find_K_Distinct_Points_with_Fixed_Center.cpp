#include<bits/stdc++.h>
using namespace std;
int main(){
  int t,maxvalue,number,score,maxvalue_one,number_one,score_one,l,m,r,o,p,q,s,u,v,w;
  cin >> t;
  while (t--){
    int x,y,k,solver=0;
    cin>>x>>y>>k;
    int arr[k][2];
    if(k%2==1){
      for(int i=0;i<((k/2)+1);i++){
        arr[i][1]=y;
        arr[i][0]=x+solver;
        solver++;
      }
      solver=1;
      for(int i=((k/2)+1);i<k;i++){
        arr[i][1]=y;
        arr[i][0]=x-solver;
        solver++;
      }
    }
    else{
      solver=1;
      for(int i=0;i<(k/2);i++){
        arr[i][1]=y;
        arr[i][0]=x+solver;
        solver++;
      }
      solver=1;
      for(int i=(k/2);i<k;i++){
        arr[i][1]=y;
        arr[i][0]=x-solver;
        solver++;
      }
    }
    for(int i=0;i<k;i++){
      cout<<arr[i][0]<<" "<<arr[i][1]<<endl;;
    }
  }
  return 0;
}