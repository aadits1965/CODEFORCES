#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin>>t;
  while(t--) {
    int n,totalswaps=0;
    cin>>n;
    vector<int> permutation(n+1);
    for(int i=1;i<=n;i++){
      cin>>permutation[i];
    }
    unordered_map<int,int> positionmap;
    for(int i=1;i<=n;i++) {
      positionmap[permutation[i]]=i; 
    }   
    for(int i=1;i<=n;i++) {
      if(permutation[i]==i){
        continue;
      }
      if(permutation[permutation[i]]==i){
        continue;
      }
      int indice=positionmap[i];
      if(indice!=-1) {
        int newvalue=permutation[permutation[i]];
        permutation[permutation[i]]=permutation[indice];
        permutation[indice]=newvalue;       
        positionmap[permutation[indice]]=indice;
        positionmap[permutation[permutation[i]]]=permutation[i];
      }
      totalswaps++;
    }
    cout<<totalswaps<<endl;
  }
  return 0;
}



