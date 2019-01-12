#include<bits/stdc++.h>
using namespace std;
#define lld long long int
bool isPrime(lld n){
	if(n<=1) return false;
	for(lld i=2; i<n; i++)
		if(n%i==0) return false;
	return true;
}

void solve(){
	lld n; scanf("%lld",&n);
	char a[n];
	scanf("%s", a);
	lld sum = 0;
	for(lld i=0; i<n; i++){
		sum+=(int)a[i];
	}
	// cout<<sum;
	if(isPrime(sum)){
		cout<<"YES"<<endl;
	}
	else cout<<"NO"<<endl;
	
}

int main(){
	int t; cin>>t;
	while(t--){
		solve();
	}
}