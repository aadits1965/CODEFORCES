#include<bits/stdc++.h>
using namespace std;
int main(){
  long long k,n,w;
  cin>>k>>n>>w;
  if(w*(w+1)*k/2-n>0){
    cout<<w*(w+1)*k/2-n<<endl;
  }
  else{
    cout<<"0"<<endl;
  }
  return 0;
}