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
    string s;
    cin>>s;
    map<int,int>m;
    for (int i=0;i<10;i++){
      m[s[i]-'0']++;
    }
    vi arr(10,-1);
    for (int i=9;i>=0;i--){
      if(m[i]>0){
        arr[9-i]=i;
      }
    }
    vi arr2;
    for(int i=0;i<10;i++){
      if(m[i]>1){
        for(int j=1;j<=m[i]-1;j++){
          arr2.PB(i);
        }
      }
    }
    vector<bool>arr3(arr2.size(),true);
    for(int i=0;i<10;i++){
      if(arr[i]==-1){
        for(int j=0;j<arr2.size();j++){
          if(arr2[j]>=9-i && arr3[j]){
            arr[i]=arr2[j];
            arr3[j]=false;
            break;
          }
        }
      }
    }
    for(int i=0;i<10;i++){
      cout<<arr[i];
    }
    cout<<endl;
  }
  return 0;
}