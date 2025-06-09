#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>arr(n);
        for(long long i=0;i<n;i++){
            cin>>arr[i];
        }
        long long sum=0;
        for(long long i=0;i<n;i++){
            sum+=arr[i];
        }
        double avg=sum/n;
        double l=avg;
        long long u=0;
        for(long long i=0;i<n;i++){
            if(arr[i]<avg){
                u++;
            }
        }
        while(u<=n/2){
            avg+=(1.0/n);
            for(long long i=0;i<n;i++){
                if(arr[i]<avg){
                    u++;
                }
            }
        }
        cout<<n*(avg-l)<<endl;
    }
    return 0;
}