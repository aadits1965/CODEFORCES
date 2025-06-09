#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num){
  if(num<=1) return false;
  if(num==2) return true; 
  if(num%2==0) return false; 
  for(int i=3;i*i<=num;i+=2) { 
    if(num%i==0) return false; 
  }
  return true; 
}

int nextPrime(int d){
  int num=d+1; 
  while(!isPrime(num)){
    num++; 
  }
  return num;
}

int main(){
  int t;
  cin>>t;
  while(t--){
    int d;
    cin>>d;
    int e=nextPrime(d);
    int f=nextPrime(e+d-1);
    cout<<e*f<<endl;
  }
  return 0;
}