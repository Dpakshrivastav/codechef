#include<bits/stdc++.h>
using namespace std;
#define lli int

void solve(){

	lli n, k;
	scanf("%d", &n);
	scanf("%d", &k);
	lli a[n];
	for(lli i=0; i<n; i++) scanf("%d", &a[i]);
	lli count=0;
	for(lli i=0; i<n; i++){
		if(a[i]>k){
			count += (lli)((a[i]-1)/k);
		}
	}
	cout<<count;
}

int main(){
	lli t; cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}
