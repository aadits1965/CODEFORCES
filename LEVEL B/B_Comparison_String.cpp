#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int t;
  cin>>t;
  while(t--){
    int n,count=1,maximum=1;
    cin>>n;
    cin.ignore();
    string s;
    getline(cin,s);
    for(int i=0;i<n-1;i++){
      if(s[i]==s[i+1]){
        count++;
        maximum=max(maximum,count);
      }
      else{
        count=1;
      }
    }
    cout<<maximum+1<<endl;
  }
  return 0;
}