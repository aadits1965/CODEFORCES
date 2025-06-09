#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int t;
  cin>>t;
  while(t--){
    long long n,count=0;
    cin>>n;
    cin.ignore();
    string a,b,c;
    getline(cin,a);
    getline(cin,b);
    getline(cin,c);
    for(int i=0;i<n;i++){
      if(a[i]==c[i] || b[i]==c[i]){
        count++;
      }
    }
    if(count==n){
      cout<<"NO"<<endl;
    }
    else{
      cout<<"YES"<<endl;
    }  
  }
  return 0;
}
