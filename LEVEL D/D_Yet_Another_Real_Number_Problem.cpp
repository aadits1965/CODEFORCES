#include<bits/stdc++.h>
using namespace std;

const int M=1000000007;

bool isLessThan(int a, int b, int shift) {
  if (shift > 30) {
    return true;
  }
  long long scaledB = b * static_cast<long long>(pow(2, shift));
  return a < scaledB; 
}

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    vector<long long>power2(n*32+1);
    power2[0]=1;
    for(int j=1;j<=n*32;j++){
      power2[j]=(power2[j-1]*2)%M;
    }
    long long total=0;
    int currentn=0;
    vector<int>reducedarr1(n);
    vector<int>reducedarr2(n);
    for(int j=0;j<n;j++){
      int current1=arr[j],current2=0;
      while(current1%2==0){
        current1/=2;current2++;
      }
      while(currentn>0 && isLessThan(reducedarr1[currentn-1],current1,current2)){
        total=(total-reducedarr1[currentn-1]*power2[reducedarr2[currentn-1]]%M+M)%M;
        total=(total+reducedarr1[currentn-1])%M;current2+=reducedarr2[currentn-1];
        currentn--;
      }
      reducedarr1[currentn]=current1;
      reducedarr2[currentn]=current2;
      currentn++;
      total=(total+reducedarr1[currentn-1]*power2[reducedarr2[currentn-1]])%M;
      cout<<total<<" ";
    }
    cout<<endl;
  }
   return 0;
}

