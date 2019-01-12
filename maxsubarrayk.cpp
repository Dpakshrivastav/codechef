#include<bits/stdc++.h>
using namespace std;
#define lli int

void solve(){

	lli n, k;
	scanf("%d", &n);
	scanf("%d", &k);
	lli a[n];
	for(lli i=0; i<n; i++){
		scanf("%d", &a[i]);
		// printf("%d", a[i]);
	}
	for(lli i=0; i<n-k+1; i++){
		lli max=INT_MIN;	
		for(lli j=i; j<i+k; j++){
			if(max<a[j]) max=a[j];
		}
		cout<<max<<" ";
	}
}

int main(){
	lli t; cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}
