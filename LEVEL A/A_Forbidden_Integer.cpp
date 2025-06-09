#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
      int n, k, x;
      cin >> n >> k >> x;
      if(x!=1){
        cout<<"YES"<<endl;
        cout<<n<<endl;
        int i=1;
        while(i<=n){
          cout<<"1"<<" ";
          i++;
        }
        cout<<endl;
      }
      else if(k==1 && x==1){
        cout<<"NO"<<endl;
      }
      else{
        if(k==2){
          if(n%2==0){
            cout<<"YES"<<endl;
            cout<<n/2<<endl;
            int b=1;
            while(b<=n/2){
            cout<<"2"<<" ";
            b++;
            }
            cout<<endl;
          }
          else{
            cout<<"NO"<<endl;
          }
        }
        else{
          if(n==3){
            cout<<"YES"<<endl;
            cout<<"1"<<endl;
            cout<<"3"<<endl;
          }
          else{
            cout<<"YES"<<endl;
            cout<<n/2<<endl;
            int j=1;
            if(n%2==0){
              while(j<=n/2){
              cout<<"2"<<" ";
              j++;
              }
              cout<<endl;
            }
            else{
              while(j<=n/2-1){
              cout<<"2"<<" ";
              j++;
              }
              cout<<"3"<<endl;
            }
          }
        }
      }
  }
  return 0;
}

