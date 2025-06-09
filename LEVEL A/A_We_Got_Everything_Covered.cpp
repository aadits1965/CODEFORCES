#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        char s[27]="abcdefghijklmnopqrstuvwxyz";
        char answer[k];
        strncpy(answer, s, k);
        answer[k] = '\0';
        for(int i=1;i<=n;i++){
          cout<<answer;
        }
        cout<<endl;
    }
    return 0;
}