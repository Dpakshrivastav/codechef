#include<bits/stdc++.h>
using namespace std;
#define lli long long int

void solve(){
    lli n; scanf("%lld", &n);
    lli a1[n/2], a2[n/2], sum1=0, sum2=0;
    for(lli i = 0; i<(n/2); i++){
        scanf("%lld", &a1[i]);
        sum1+=a1[i];
        // cout<<sum1<<endl;
    }
    for(lli i = (n/2); i<n; i++){
        scanf("%lld", &a2[i]);
        sum2+=a2[i];
        // cout<<sum2<<endl;
    }
    // cout<<sum1<<"\t"<<sum2<<endl;
    cout<<sum1*sum2<<endl;
    
    
}

int main(){
    int t; scanf("%d", &t);
    while(t--){
        solve();
    }
}