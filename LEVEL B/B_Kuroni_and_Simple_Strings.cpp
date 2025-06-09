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
  string s;
  cin>>s;
  int n=s.size();
  vi arr(n);
  int count=0;
  int count2=0;
  for(int i=0;i<n;i++){
    if(s[i]==')'){
      count2++;
    }
  }
  for(int i=0;i<n;i++){
    if(s[i]=='('){
      count++;
    }
    arr[i]=count;
  }
  vi arr2(n);
  int count1=0;
  for(int i=0;i<n;i++){
    if(s[i]==')'){
      count1++;
    }
    arr2[i]=count2-count1;
  }
  bool flag=false;
  int j=0;
  int m=0;
  for(int i=0;i<n;i++){
    if(arr[i]==arr2[i] && arr[i]!=0){
      flag=true;
      j=arr[i];
      m=i;
      break;
    }
  }
  if(flag){
    cout<<"1"<<endl;
    cout<<j*2<<endl;
    int k=j;
    for(int i=0;i<n && j>0;i++){
      if(s[i]=='('){
        cout<<i+1<<" ";
        j--;
      }
    }
    for(int i=m+1;i<n && k>0;i++){
      if(s[i]==')'){
        cout<<i+1<<" ";
        k--;
      }
    }
  }
  else{
    cout<<"0"<<endl;
  }
  return 0;
}