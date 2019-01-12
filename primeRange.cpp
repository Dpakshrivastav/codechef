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
	lli n, w; cin>>w>>n;
	lli prime[n];
	lli j=0;
	for(lli i=w; i<=n; i++)
		if(isPrime(i)){
			prime[j++]=i;
		}
	for(lli i=0; i<j; i++){
		cout<<prime[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int t; cin>>t;
	while(t--){
		solve();
	}
}