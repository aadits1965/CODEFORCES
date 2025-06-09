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

int count_zero_bits_at_position(const vector<int>& arr, int pos) {
  int count = 0;
  for (int num : arr) {
    if (((num >> pos) & 1) == 0) {
      count++;
    }
  }
  return count;
}

int main(){
  fastIO;
  int t;
  cin>>t;
  while(t--){
    int n,m;
    cin>>n>>m;
    vi arr(n),brr(m);
    FOR(i,n){
      cin>>arr[i];
    }
    FOR(i,m){
      cin>>brr[i];
    }
    int xor1=arr[0];
    for(int i=1;i<n;i++){
      xor1=arr[i]^xor1;
    }
    int or1=brr[0];
    int and1=arr[0];
    for(int i=1;i<n;i++){
      and1=(arr[i] & and1);
    }
    for(int i=1;i<m;i++){
      or1=(brr[i] | or1);
    }
    vi bits,bits2;
    for (int i = 0; i < 32; ++i) {
      bits.push_back((xor1 >> i) & 1);
    }
    vi bits4=bits;
    for (int i = 0; i < 32; ++i) {
      bits2.push_back((or1 >> i) & 1);
    }
    FOR(i,32){
      if(bits[i]==1){
        if(bits2[i]==1){
          if(count_zero_bits_at_position(arr,i)%2==1){
            bits[i]=0;
          }
        }
      }
    }
    FOR(i,32){
      if(bits4[i]==0){
        if(bits2[i]==1){
          if(count_zero_bits_at_position(arr,i)%2==1){
            bits4[i]=1;
          }
        }
      }
    }
    int d = 0;
    int e = 0;
    for (int i = bits.size() - 1; i >= 0; --i) {
      d = (d << 1) | bits[i];
    }
    for (int i = bits4.size() - 1; i >= 0; --i) {
      e = (e << 1) | bits4[i];
    }
    cout<<min(xor1,d)<<" "<<max(xor1,e)<<endl;
  }
  return 0;
}