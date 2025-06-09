#include<bits/stdc++.h>
using namespace std;

int main(){
  int T;
  cin>>T;
  while(T--){
    int n,c;
    cin>>n>>c;
    vector<long long>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
      arr[i]+=i+1;
    }
    sort(arr.begin(),arr.end());
    long long sum=0;
    for(int i=0;i<n;i++){
      sum+=arr[i];
      if(sum>c){
        cout<<i<<endl;
        break;
      }
    }
    if(sum<=c){
      cout<<n<<endl;
    }
    
	}
  return 0;
}