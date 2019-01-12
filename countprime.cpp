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
	lli n, m; cin>>n>>m;
	bool prime[m+1];
	memset(prime, true, sizeof(prime));
	prime[0] = false;
	prime[1] = false;
	for(int i=2; i*i<=m; i++){
		if(prime[i]){
			for(int j=i*i; j<=m; j+=i){
				prime[j]=false;
			}
		}
	}
	int count=0;
	for(int i=n; i<=m; i++){
		if(prime[i]==true) count++;
	}
	// if(n==1) count-=1;
	cout<<count<<endl;
}

int main(){
	int t; cin>>t;
	while(t--){
		solve();
	}
}