#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); 
  int year,count=1,flag=1;
  cin>>year;
  int z=year;
  while(flag){
    year++;
    int a=year/1000;
    int b=(year%1000)/100;
    int c=(year%100)/10;
    int d=year%10;
    if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
      flag=0;
    }
    else{
      count++;
    }
  }
  cout<<count+z<<endl;
  return 0;
}