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
  int n,count1=0,count2=0,count3=0,count4=0;
  cin>>n;
  vi arr(n);
  FOR(i,n){
    cin>>arr[i];
    if(arr[i]==1){
      count1++;
    }
    else if(arr[i]==2){
      count2++;
    }
    else if(arr[i]==3){
      count3++;
    }
    else{
      count4++;
    }
  }
  if(count1<=count3){
    cout<<count4+count3+ceil(1.0*count2/2)<<endl;
  }
  else{
    int b=count1-count3;
    if(count2%2==0){
      cout<<count4+count3+ceil(1.0*b/4)+ceil(1.0*count2/2)<<endl;
    }
    else{
      if(b>2){
        cout<<count4+count3+ceil(1.0*(b-2)/4)+ceil(1.0*count2/2)<<endl;
      }
      else{
        cout<<count4+count3+ceil(1.0*count2/2)<<endl;
      }
    }
  }
  return 0;
}