#include<bits/stdc++.h>
using namespace std;
#define lli long long int
bool isPrime(lli n){
	if(n<=1) return false;
	for(lli i=2; i<n; i++)
		if(n%i==0) return false;
	return true;
}

void solve(){
	lli n; cin>>n;
	lli prime[n];
	lli j=0;
	if(n<=1) cout<<(-1)<<" "<<(-1)<<" ";
	for(lli i=2; i<=n; i++)
		if(isPrime(i)){
			prime[j++]=i;
		}
	lli mid=(j-1)/2;
	for(lli i = 0; i<=mid; i++){
		for(lli k=j-1; k>=mid; k--){
			if((prime[i]+prime[k])==n){
				cout<<prime[i]<<" "<<prime[k]<<endl;
				return;			
			}
		}
	}
	cout<<(-1)<<endl;
}

int main(){
	int t; cin>>t;
	while(t--){
		solve();
	}
}