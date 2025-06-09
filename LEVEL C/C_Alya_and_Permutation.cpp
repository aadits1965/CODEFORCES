#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int t;
  cin>>t;
  cin.ignore();
  while(t--){
    long long n;
    cin>>n;
    if(n%2==0){
      long long a=log2(n);
      long long b=a+1;
      cout<<pow(2,b)-1<<endl;
      if(n==6){
        cout<<"1 2 4 6 5 3"<<endl;
      }
      else if(n==8){
        cout<<"2 4 5 1 3 6 7 8"<<endl;
      }
      else{
        for(int i=1;i<=n-4;i++){
          cout<<i<<" ";
        }
        cout<<n-2<<" "<<n<<" "<<n-1<<" "<<n-3<<endl;
      }
    }
    else{
      if(n==5){
        cout<<n<<endl;
        cout<<n-3<<" "<<n-4<<" "<<n-2<<" "<<n-1<<" "<<n<<endl;
      }
      else{
        cout<<n<<endl;
        for(int i=1;i<=n-5;i++){
          cout<<i<<" ";
        }
        cout<<n-3<<" "<<n-4<<" "<<n-2<<" "<<n-1<<" "<<n<<endl;
      }
    }
  }
  return 0;
}