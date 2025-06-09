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
    if(n==2){
      cout<<"1 1"<<endl;
      cout<<n<<" "<<n<<endl;
    }
    else if(n==3){
      cout<<"1 1"<<endl;
      cout<<"1 2"<<endl;
      cout<<n<<" "<<n<<endl;
    }
    else if(n==4){
      cout<<"1 1"<<endl;
      cout<<"1 2"<<endl;
      cout<<n<<" "<<n-2<<endl;
      cout<<n<<" "<<n<<endl;
    }
    else if(n==5){
      cout<<"1 1"<<endl;
      cout<<"1 2"<<endl;
      cout<<"1 "<<n<<endl;
      cout<<n<<" "<<n-2<<endl;
      cout<<n<<" "<<n<<endl;
    }
    else if(n==6){
      cout<<"1 1"<<endl;
      cout<<"1 2"<<endl;
      cout<<"1 "<<n<<endl;
      cout<<n<<" 1"<<endl;
      cout<<n<<" "<<n-2<<endl;
      cout<<n<<" "<<n<<endl;
    }
    else{
      cout<<"1 1"<<endl;
      cout<<"1 2"<<endl;
      cout<<"1 "<<n<<endl;
      cout<<n<<" 1"<<endl;
      cout<<n<<" "<<n-2<<endl;
      cout<<n<<" "<<n<<endl;
      for(int i=1;i<=n-6;i++){
        cout<<3+i<<" 1"<<endl;
      }
    }
    cout<<endl;
  }
  return 0;
}