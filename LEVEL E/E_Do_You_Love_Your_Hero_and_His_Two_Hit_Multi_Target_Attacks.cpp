#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
int main(){
  fastIO;
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    if(n==0){
      cout<<"1"<<endl;
      cout<<"1 1"<<endl;
      continue;
    }
    vector<int>arr;
    while (n > 0) {
      for (int i = 1; i < 500; i++) {
        int sum_i = (i * (i + 1)) / 2;  
        int sum_prev = ((i - 1) * i) / 2;   
        if (sum_i < n) {
          continue;
        } 
        else if (sum_i == n) {
          arr.push_back(i);
          n = 0;
          break;
        } 
        else {
          arr.push_back(i - 1);  
          n -= sum_prev;  
          break;  
        }
      }
    }
    int sum=0;
    for(int i=0;i<arr.size();i++){
      sum+=arr[i];
    }
    int x=0,y=500;
    cout<<sum+1<<endl;
    cout<<x<<" "<<y<<endl;
    bool flag=false;
    for(int i=0;i<arr.size();i++){
      for(int j=0;j<arr[i];j++){
        if(flag){
          x++;
        }
        else{
          y--;
        } 
        cout<<x<<" "<<y<<endl; 
      }
      flag=(!flag);
    }
  }
  return 0;
}