#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while (t--){
    int n,m;
    cin>>n>>m;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
      arr[i]=arr[i]%m;
      if(arr[i]==0){
        arr[i]=m;
      }
    }
    vector<int> ord(n);
    iota(ord.begin(), ord.end(), 0);
    stable_sort(ord.begin(), ord.end(), [&](int i, int j) {
      return arr[i] > arr[j];
    });
    for (auto &x : ord) cout << x + 1 << ' ';
    cout << endl;
  }
  return 0;
}