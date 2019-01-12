#include<bits/stdc++.h>
using namespace std;
#define lli long long int

void solve(){
    lli n, k; scanf("%lld%lld", &n, &k);
    lli a[n];
    for(lli i=0; i<n; i++) scanf("%lld", &a[i]);
    lli count = 0;
    lli sum = 0;
    for(lli i=0; i<n; i++){
        
        for(lli j=i; j<n; j++){
            sum+=a[j];
            if(sum<k) {count++;
                cout<<a[j]<<" ";
            }
            else break;
        }
        cout<<endl;
        sum =0;

    }
    cout<<count;
}

int main(){
    int t; scanf("%d", &t);
    while(t--){
        solve();
    }
}