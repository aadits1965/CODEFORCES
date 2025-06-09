#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
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
    int m,n;
    cin>>m>>n;
    vi arr(n);
    FOR(i,n){
      cin>>arr[i];
    }
    sort(arr.rbegin(),arr.rend());
    long long sum = 0;
    // forlong long i = 0; i < n; i++) {
    //   for (int j = i + 1; j < n; j++) {
    //     if (arr[i] == m && arr[j] == m) {
    //       sum += 2 * (m - 1);
    //     } 
    //     else {
    //       if(arr[i]+arr[j]>=m){
    //         sum += 2*(arr[i]-m+arr[j]+1);
    //       }
    //     }
    //   }
    // }
    vector<long long> arr2(n); 
    long long sum2=0;
    for (long long i = 0; i < n; i++) {
      sum2+=arr[i];
      arr2[i]=sum2; 
    }
    int right=n-1;
    int left=0;
    while(left<right){
      if(arr[right]+arr[left]>=m){
        left++;
      }
      else{
        sum+=2*(arr[right]*left+arr2[left-1]-left*m+left);
        right--;
      }
    }
    // if(left==right){
    //   sum+=2*(arr[right]*left+arr2[left-1]-left*m+left);
    // }
    int j=-1;
    for(int i=0;i<n;i++){
      if(arr[i]!=m){
        j=i;
        break;
      }
    }
    if(j==0){
      for(int i=left;i>0;i--){
        sum+=2*(arr[i]*(i)+arr2[i-1]-(i)*m+(i));
      }
    }
    else if(j!=-1){
      for(int i=left;i>0;i--){
        sum+=2*(arr[i]*(i)+arr2[i-1]-(i)*m+(i)-j);
      }
    }
    else{
      sum+=(left+1)*(left)*(m-1);
    }
    cout<<sum<<endl;
  }
  return 0;
}