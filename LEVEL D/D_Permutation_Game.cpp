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
    long long n,k,b,s;
    cin>>n>>k>>b>>s;
    vi per(n),arr(n);
    FOR(i,n){
      cin>>per[i];
    }
    FOR(i,n){
      cin>>arr[i];
    }
    long long sumb=0,sums=0;
    vi brr,srr;
    unordered_set<long long> visited1;
    long long d=k;
    while(d-- && b >= 1 && b <= n && visited1.find(b) == visited1.end()){
      brr.push_back(arr[b-1]);
      visited1.insert(b);
      b = per[b-1];
    }
    unordered_set<long long> visited2;
    long long e=k;
    while(e-- && s >= 1 && s <= n && visited2.find(s) == visited2.end()){
      srr.push_back(arr[s-1]);
      visited2.insert(s);
      s = per[s-1];
    }
    long long b1=brr.size();
    long long s1=srr.size();
    long long sum1=0;
    vector<long long> brr2(b1),srr2(s1);
    FOR(i,b1){
      brr2[i]=brr[i]*(k-i)+sum1;
      sum1+=brr[i];
    }
    long long sum2=0;
    FOR(i,s1){
      srr2[i]=srr[i]*(k-i)+sum2;
      sum2+=srr[i];
    }
    long long max1=0,max2=0;
    for(long long num : brr2){
      max1=max(max1,num);
    }
    for(long long num : srr2){
      max2=max(max2,num);
    }
    if(max1<max2){
      cout<<"Sasha"<<endl;
    }
    else if(max1==max2){
      cout<<"Draw"<<endl;
    }
    else{
      cout<<"Bodya"<<endl;
    }
    
  }
  return 0;
}