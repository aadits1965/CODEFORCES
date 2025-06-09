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
    int arr[n][m];
    FOR(i,n){
      FOR(j,m){
        cin>>arr[i][j];
      }
    }
    unordered_map<int, int> freq; 
    for (int i = 1; i < n-1; i++) {
      for (int j = 1; j < m-1; j++) {
        if(arr[i][j]!=arr[i+1][j] && arr[i][j]!=arr[i][j+1] && arr[i][j]!=arr[i-1][j] && arr[i][j]!=arr[i][j-1]){
          freq[arr[i][j]]++;
        }
      }
    }
    for(int i=1;i<n-1;i++){
      if(arr[i][0]!=arr[i-1][0] && arr[i][0]!=arr[i+1][0] && arr[i][0]!=arr[i][1] ){
        freq[arr[i][0]]++;
      }
    }
    for(int j=1;j<m-1;j++){
      if(arr[0][j]!=arr[0][j-1] && arr[0][j]!=arr[0][j+1] && arr[0][j]!=arr[1][j] ){
        freq[arr[0][j]]++;
      }
    }
    for(int i=1;i<n-1;i++){
      if(arr[i][m-1]!=arr[i-1][m-1] && arr[i][m-1]!=arr[i+1][m-1] && arr[i][m-1]!=arr[i][m-2]){
        freq[arr[i][m-1]]++;
      }
    }
    for(int j=1;j<m-1;j++){
      if(arr[n-1][j]!=arr[n-1][j-1] && arr[n-1][j]!=arr[n-1][j+1] && arr[n-1][j]!=arr[n-2][j]){
        freq[arr[n-1][j]]++;
      }
    }
    if(arr[0][0]!= arr[0][1] && arr[0][0]!= arr[1][0]){
      freq[arr[0][0]]++;
    }
    if(arr[0][m-1]!= arr[0][m-2] && arr[0][0]!= arr[1][m-1]){
      freq[arr[0][m-1]]++;
    }
    if(arr[n-1][0]!= arr[n-1][1] && arr[n-1][0]!= arr[n-2][0]){
      freq[arr[n-1][0]]++;
    }
    if(arr[n-1][m-1]!= arr[n-1][m-2] && arr[n-1][m-1]!= arr[n-2][m-1]){
      freq[arr[n-1][m-1]]++;
    }
    unordered_map<int, int> freq2; 
    int total=0;
    for (int i = 1; i < n-1; i++) {
      for (int j = 1; j < m-1; j++) {
        if(!(arr[i][j]!=arr[i+1][j] && arr[i][j]!=arr[i][j+1] && arr[i][j]!=arr[i-1][j] && arr[i][j]!=arr[i][j-1])){
          freq2[arr[i][j]]++;
          total++;
        }
      }
    }
    for(int i=1;i<n-1;i++){
      if(!(arr[i][0]!=arr[i-1][0] && arr[i][0]!=arr[i+1][0] && arr[i][0]!=arr[i][1])){
        freq2[arr[i][0]]++;
        total++;
      }
    }
    for(int j=1;j<m-1;j++){
      if(!(arr[0][j]!=arr[0][j-1] && arr[0][j]!=arr[0][j+1] && arr[0][j]!=arr[1][j])){
        freq2[arr[0][j]]++;
        total++;
      }
    }
    for(int i=1;i<n-1;i++){
      if(!(arr[i][m-1]!=arr[i-1][m-1] && arr[i][m-1]!=arr[i+1][m-1] && arr[i][m-1]!=arr[i][m-2])){
        freq2[arr[i][m-1]]++;
        total++;
      }
    }
    for(int j=1;j<m-1;j++){
      if(!(arr[n-1][j]!=arr[n-1][j-1] && arr[n-1][j]!=arr[n-1][j+1] && arr[n-1][j]!=arr[n-2][j] )){
        freq2[arr[n-1][j]]++;
        total++;
      }
    }
    if(!(arr[0][0]!= arr[0][1] && arr[0][0]!= arr[1][0])){
      freq2[arr[0][0]]++;
      total++;
    }
    if(!(arr[0][m-1]!= arr[0][m-2] && arr[0][0]!= arr[1][m-1])){
      freq2[arr[0][m-1]]++;
      total++;
    }
    if(!(arr[n-1][0]!= arr[n-1][1] && arr[n-1][0]!= arr[n-2][0])){
      freq2[arr[n-1][0]]++;
      total++;
    }
    if(!(arr[n-1][m-1]!= arr[n-1][m-2] && arr[n-1][m-1]!= arr[n-2][m-1])){
      freq2[arr[n-1][m-1]]++;
      total++;
    }
    vector<int> unique_elements;
    for (auto &p : freq) {
      unique_elements.push_back(p.first);
    }
    vector<int> unique_elements2;
    for (auto &p : freq2) {
      unique_elements2.push_back(p.first);
    }
    int ans=0;
    ans+=unique_elements.size();
    int max_freq = 0, most_frequent_element = -1;
    for (auto &p : freq2) {
      if (p.second > max_freq) {
        max_freq = p.second;
        most_frequent_element = p.first;
      }
    }
    if(n*m==1){
      cout<<"0"<<endl;
      continue;
    }
    if(max_freq==n*m){
      cout<<"0"<<endl;
      continue;
    }
    if (find(unique_elements.begin(),unique_elements.end(), most_frequent_element) != unique_elements.end()) {
      cout<<ans-1+total-max_freq<<endl;
    } else {
      cout<<ans+total-max_freq<<endl;
    }
    

  }
  return 0;
}