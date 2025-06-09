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
    int n,m;
    cin>>n>>m;
    if(n==1){
      cout<<m<<endl;
      continue;
    }
    int count=0;
    for(int i=0;i<=ceil(log2(m));i++){
      if(m&(1<<i)){
        count++;
      }
      else{
        break;
      }
    }
    int d=pow(2,count)-1;//3
    // int count1=0;
    // if(n>=(1<<int(log2(m)))){
    //   for(int i=0;i<=d && count1<n;i++){
    //     cout<<i<<" ";
    //     count1++;
    //   }
    //   if(n-count1>0){
    //     cout<<m<<" ";
    //     count1++;
    //   }
    //   for(int i=1;i<=n-count1;i++){
    //     cout<<"0 ";
    //   }
    //   cout<<endl;
    // }
    // else{

    // }
    int count1=0;
    if(d==0){
      cout<<"0 "<<m<<" ";
      count1+=2;
      for(int i=1;i<=n-count1;i++){
        cout<<"0 ";
      }
      cout<<endl;
      continue;
    }
    if(ceil(log2(m))==ceil(log2(d))){
      if(n<=pow(2,count-1)){
        for(int i=0;i<=d && count1<n-1;i++){
          cout<<i<<" ";
          count1++;
        }
        cout<<m<<" ";
        count1++;
      }
      else{
        for(int i=0;i<=d && count1<n;i++){
          cout<<i<<" ";
          count1++;
        }
      }
    }
    else{
      if(n<=d+1){
        for(int i=0;i<=d && count1<n-1;i++){
          cout<<i<<" ";
          count1++;
        }
        cout<<m<<" ";
        count1++;
      }
      else{
        for(int i=0;i<=d && count1<n;i++){
          cout<<i<<" ";
          count1++;
        }
        cout<<m<<" ";
        count1++;
      }
    }
    for(int i=1;i<=n-count1;i++){
      cout<<"0 ";
    }
    cout<<endl;
  }
  return 0;
}