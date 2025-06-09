#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int>arr(n);
    vector<int>odd_indices;
    vector<int>even_indices;
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      if(arr[i]%2==0){
        even_indices.push_back(i+1);
      }
      else{
        odd_indices.push_back(i+1);
      }
    }
    if(odd_indices.size()==1){
      cout<<"YES"<<endl;
      cout<<odd_indices[0]<<" "<<even_indices[0]<<" "<<even_indices[1]<<endl;
    }
    else if(odd_indices.size()>=3){
      cout<<"YES"<<endl;
      cout<<odd_indices[0]<<" "<<odd_indices[1]<<" "<<odd_indices[2]<<endl;
    }
    else if(odd_indices.size()==0){
      cout<<"NO"<<endl;
    }
    else if(odd_indices.size()==2 && n==3){
      cout<<"NO"<<endl;
    }
    else{
      cout<<"YES"<<endl;
      cout<<odd_indices[0]<<" "<<even_indices[0]<<" "<<even_indices[1]<<endl;
    }
  }
  return 0;
}
