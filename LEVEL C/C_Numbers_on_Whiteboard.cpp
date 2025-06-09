#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while (t--){
    int n;
    cin>>n;
    cout<<"2"<<endl;
    cout<<n-1<<" "<<n<<endl;
    for (int i = n - 2; i > 0; --i) {
      cout << i << " " << i + 2 << endl;
    }
  }
  return 0;
}