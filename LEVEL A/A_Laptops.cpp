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
    int n;
    cin>>n;
    int arr[n][2];
    int count1=0,count2=0;
    FOR(i,n){
      FOR(j,2){
        cin>>arr[i][j];
      }
      if(arr[i][0]>arr[i][1]){
        count1++;
      }
      if(arr[i][0]<arr[i][1]){
        count2++;
      }
    }
    if(count1>=1 && count2>=1){
      cout<<"Happy Alex"<<endl;
    }
    else{
      cout<<"Poor Alex"<<endl;
    }
  return 0;
}